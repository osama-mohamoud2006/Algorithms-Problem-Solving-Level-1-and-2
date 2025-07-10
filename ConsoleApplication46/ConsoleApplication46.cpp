#include<iostream>
#include <cmath>
using namespace std;
int enter_number() {
	int n;
	cout << "enter number: ";
	cin >> n;
	return n;
}
int abs_bultin(int n) {
	return  abs(n);
}
int absolute_hande_coded(int n ) {
	if (n > 0) return n;
	else return -1 * n;
}
int main() {
	int n = enter_number();
	cout << "\nmy abs result " << absolute_hande_coded(n);
	cout << "\nthe built-in function " << abs_bultin(n) << endl;
}