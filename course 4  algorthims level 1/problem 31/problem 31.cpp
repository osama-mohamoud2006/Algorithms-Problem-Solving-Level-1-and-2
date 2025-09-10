// power of 2 ,3 ,4
#include <iostream>
using namespace std;
int input() {
	int n;
	cout << "enter number: ";
	cin >> n;
	return n;
}
void power(int n) {
	cout << "the power of 2"<<endl;
	cout << n * n << endl;
	cout << "the power 3 " << endl;
	cout << n * n * n << endl;
	cout << "the power 4 " << endl;
	cout << n * n * n * n << endl;
}
int main() {
	power(input());
}