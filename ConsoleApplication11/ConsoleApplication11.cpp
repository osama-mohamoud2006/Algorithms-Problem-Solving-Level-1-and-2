#include <iostream>
using namespace std;

int input(string text) {
	int n; 
	do {
		cout << text;
		cin >> n;
	} while (0 >= n);
	return n; 
}
 // if reverse equals to the number then it is parndolim
int reverse(int n) {
	int rem = 0 , n2 =0; 
	while (n > 0) {
		rem = n % 10; 
		n = n / 10;
		n2 = n2 * 10 + rem;
	}
	//cout << n2 << endl;
	return n2;
}
bool check(int n ) {
	return n == reverse(n);
 }

void print(int n ) {
	if (check(n)  == 1) cout << "yes it is a Palindrome number." << endl;
	else cout << "No it isn't a Palindrome number." << endl;
}
int main() {
	print(check(input("Enter number: ")));
 }