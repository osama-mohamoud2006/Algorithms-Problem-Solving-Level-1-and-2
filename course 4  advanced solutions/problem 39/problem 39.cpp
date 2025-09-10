// total = cash paid - total price of product
#include <iostream>
using namespace std;
double input(string mesa) {
	double n;
	do {

		cout << mesa << endl;

		cin >> n;
	} while (0 >= n);
	return n;
}
double rem( double paid , double total) {
	return paid-total;
}
int main() {
	
	double paid = input("enter the the price you gave ");
	double total = input("enter the total price ");
	cout << "then the rest of you money is " << rem(paid , total)<<endl;
	cout << "then the rest of you money is(iam not sure) " << rem(total , paid)<<endl;
}