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
	int res =0;
	while (n > 0) {
		rem = n % 10; // the final digit
		n = n / 10; // the digits without final one 
		res = res * 10 + rem;
	}
	cout << res << endl;

}
int main() {
	reverse(input("enter number: "));
}