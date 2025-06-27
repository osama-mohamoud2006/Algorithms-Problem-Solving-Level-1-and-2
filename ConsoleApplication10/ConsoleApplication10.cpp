#include <iostream>
using namespace std;
int input(string text) {
	int n = 0; 
	do {
		cout << text;
		cin >> n;
	} while (n <= 0);
	return n;
 }
int reverse_num(int n) {
	int rem = 0 , n2 =0 ; 
	while (n > 0) {
		rem = n % 10; // the last digit
		n = n / 10; 
		n2 = n2 * 10 + rem; // make the number reverse 
	}
	return n2; 
}
void number_ordered(int n2) {
	int rem2 = 0;
	while (n2 > 0) {
		rem2 = n2 % 10;
		cout << rem2 << endl;
		n2 = n2 / 10;
	}
}
int main() {
	number_ordered(reverse_num(input("enter number: ")));
}