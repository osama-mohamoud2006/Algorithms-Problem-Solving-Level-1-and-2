// half number 
#include <iostream>
#include <string>
using namespace std;
int input() {
	int num;
	cout << "enter number: ";
	cin >> num;
	return num;
}
float halfnum(int  num) {
	return (float) num / 2;
}
void print(int num ) {
	string  half = "the half is: " + to_string(num) + " is " + to_string(halfnum(num) );
	cout << half << endl;
}
int main() {
	print(input());
}