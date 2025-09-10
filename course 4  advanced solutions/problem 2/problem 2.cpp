// this program aims to ask user about his name and print it
#include <iostream>
#include<string>
using namespace std;
string  input_name() { // to ask user to enter his name , i used returning value function bcz i enter value want to use it 
	string name;
	cout << "enter your name: " << endl;
	getline(cin, name); // get full name without problems 
	return name; // return value
}
void output(string name) {  /// print function
	cout << "Hi " << name << "!" << endl;
}
int main() {
	string name; //declaring the function i used
	output(input_name() );  // as usual we put the input function into output 
	// i put name in fun input_name bcz it is parameter 
}