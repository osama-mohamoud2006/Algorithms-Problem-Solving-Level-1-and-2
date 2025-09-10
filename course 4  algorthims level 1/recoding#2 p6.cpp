#include <iostream>
using namespace std;
// print full name and it is reversed
struct stname{
    string first_name;
    string last_name;
    bool reversed;
};
stname input(){
    stname input;
    cout<<"enter your first name: ";
    cin>> input.first_name;
    cout<<"enter your last name: ";
    cin>>input.last_name;
    cout<<"you want to reverse your name? ";
    cin>>input.reversed;
    return input;
}
string full_name(stname full_name){
    string fullname; // i wanna to call this 
  if (full_name.reversed)
   return fullname = full_name.last_name+ "" + full_name.first_name ;

    else
      return fullname = full_name.first_name+" " + full_name.last_name ;
}
void print(string fullname){

    cout<<"your name is: "<< fullname <<endl;
}

int main(){
    print( full_name(input()));
}