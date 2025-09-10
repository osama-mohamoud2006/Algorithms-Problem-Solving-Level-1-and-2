#include <iostream>
using namespace std;
int input(string message) {
	int n;
	do {
		cout << message;
		cin >> n;
	} while (0 > n);
	return n;
 }

void pattern(int n) {
	for (int i = 1; i <= n; i++) { // for lines
		// loop to repeat thing at specified line 
		/*for (int j = 1; j <=i; j++) {
			cout << i;
		}*/
		for (int j = i; j > 0; j--) {
			cout << i;
		}

		cout << endl;
	}

}

int main() {
	int n = input("enter postive number: ");
	pattern(n);
}