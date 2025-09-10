#include <iostream>
using namespace std;
int input(string mesa) {
	int n;
	do {
		cout << mesa << endl;
		cin >> n;
	} while (0 >= n);
	return n;
}
float taxes(float total) {
	total = total * 1.11; //2*1
	total = total* 1.16;

	return total;
}
int main() {
	int n = 0;
	float total = input("enter n ");
	cout << "total bill " << total  << endl;
	cout << "after taxes " << taxes(total) << endl;
}