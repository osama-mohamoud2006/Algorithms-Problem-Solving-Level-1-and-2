#!/bin/bash

# مسار المشروع الأساسي
project_dir="E:/projects/c++ course/Algorithms & Problem-Solving Level 2"
cd "$project_dir" || exit

# ملف تاريخ الإنشاء
created_file=".created_at"

# إنشاء التاريخ لو المشروع جديد ومفيش ملف
if [ ! -f "$created_file" ]; then
    created_date=$(date '+%Y-%m-%d_%H-%M-%S')
    echo "$created_date" > "$created_file"
    echo "🆕 Created project date: $created_date"
else
    created_date=$(cat "$created_file")
    echo "📅 Project originally created at: $created_date"
fi

# إنشاء Snapshot في مجلد خاص
snapshot_dir="E:/projects/_snapshots"
snapshot_path="$snapshot_dir/$created_date"

if [ ! -d "$snapshot_path" ]; then
    mkdir -p "$snapshot_path"
    cp -r "$project_dir" "$snapshot_path"
    echo "📁 Snapshot created at: $snapshot_path"
else
    echo "📦 Snapshot already exists at: $snapshot_path"
fi

# Git إعداد الريموت لو مش موجود
git remote set-url origin "https://github.com/osama-mohamoud2006/Algorithms-Problem-Solving-Level-2.git"

# Git commands
git pull origin main

git add -u
git add .

commit_msg="Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"
git commit -m "$commit_msg" --quiet

git push origin main --quiet
