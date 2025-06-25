#include <iostream>
#include <string>
using namespace std;
int input(string text) {
	int n;
	do {
		cout << text;
		cin >> n;
	} while (0 >= n);
	return n;
}
void reverse(int n) {
	int rem = 0;
	string res = " ";
	while (n > 0) {
		rem = n % 10; // the final digit
		n = n / 10; // the digits without final one 
		res += to_string(rem);
	}
	cout << res << endl;

}
int main() {
	reverse(input("enter number: "));
}