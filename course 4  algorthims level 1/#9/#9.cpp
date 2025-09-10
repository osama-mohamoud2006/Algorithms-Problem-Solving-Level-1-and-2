// sum of 3 numbers
#include<iostream>
using namespace std;
int read(int& n1, int& n2, int& n3) {
	cout << "enter number 1: ";
	cin >> n1;
	cout << "enter number 2: ";
	cin >> n2;
	cout << "enter number 3: ";
	cin >> n3;
	return n1, n2, n3;
}
int sum(int& n1, int& n2, int& n3) {
	return n1 + n2 + n3;
}
void output( int sum ) {
	cout << "the sum is " << sum << endl;
}
int main() {
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	cout << read(n1, n2, n3);
	output( sum(n1, n2, n3) );

}