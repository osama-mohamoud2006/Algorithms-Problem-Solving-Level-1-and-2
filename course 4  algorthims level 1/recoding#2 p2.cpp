#include<iostream>
using namespace std;
string input (){ /// it shold return value if you used it as void you cann't use it as return value
    cout<<"enter your name: ";
    string name;
    getline(cin , name );
    return name;
}
void print (string name){
    cout<<"hi "<<name<<endl;
}
int main(){
    print( input());
}