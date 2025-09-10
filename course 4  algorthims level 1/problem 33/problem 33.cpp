// grades
#include <iostream>
using namespace std;
int input(int from , int to ){
	int grade;
	do {
		cout << "enter grade: ";
		cin >> grade;
	} while (!(from <= grade && grade <= to)); // conditon of repetation

	return grade;
}
char grade(int grade) {
	switch (grade);
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'c';
	else if (grade >= 60)
		return 'D';
	else
		return 'F';
}
int main() {
	cout << "the result is: " << grade(input(0, 100));
}