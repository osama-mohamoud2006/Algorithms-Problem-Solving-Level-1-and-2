// power of number using loops
#include <iostream>
using namespace std;
int readnum() {
	cout << "enter the number ";
	int n;
	cin >> n;
	return n;
}
int pow() {
	cout << "enter the power of the number ";
	int p;
	cin >> p;
	return p;
}
void power_of_number(int n, int p) {
	if (p == 0) {
		cout << 1 << endl;
	}
	int r = 1;
	for (int i = 1; i <= p; i++) {
		r = r* n;
	}
	cout << n << " power " << p << " is " << r << endl;
}
int main() {
	power_of_number(readnum(), pow());
}