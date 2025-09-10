#include <iostream>
using namespace std;
int input(string message) {
	int n;
	do {
		cout << message;
		cin >> n;
	} while (0 > n);
	return  n;
}

void print_letter(int n) {

	for (int i = 0; i <=n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << char(64 + i);

		}
		cout << endl;

	}
}

int main() {
	print_letter(input("enter n "));
}