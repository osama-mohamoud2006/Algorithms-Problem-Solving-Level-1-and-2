#include <iostream>
using namespace std;
int input() {
	int n; 
	do {
		cout << "enter number ";
		cin >> n;
	} while (0 >= n);
	return n; 
}
void pattern(int n) {
	for (int i = n; i >= 1; i--) { // 5 
		
		for (int j = i; j >= 1; j--) { // 'j' is sign of repeation 
			cout << i ;
		}
		cout << endl;
	}
}
int main() {
	pattern(input());
}