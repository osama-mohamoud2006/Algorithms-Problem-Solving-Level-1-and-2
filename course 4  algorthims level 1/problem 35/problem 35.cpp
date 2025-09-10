#include <iostream>
using namespace std;
struct coins {
	int penny;
	int nickel;
	int dime;
	int quater; 
	int dollar;
};
coins input() {
	coins input;
	cout << "enter the numbrer of pennies: ";
	cin >> input.penny;
	cout << "enter the numbrer of nickels: ";
	cin >> input.nickel;
	cout << "enter the numbrer of dimes: ";
	cin >> input.dime;
	cout << "enter the numbrer of quaters: ";
	cin >> input.quater;
	cout << "enter the numbrer of dollers: ";
	cin >> input.dollar;
	return input;
}
int total(coins input) {
	int total =
		input.penny * 1 +
		input.nickel * 5 +
		input.dime * 10 +
		input.quater * 25 +
		input.dollar * 100;
	return total;
}
int main() {
	float sum = total(input());
	cout << "the total is " << sum << " cents";

	cout << endl;
	cout << "the total $ is " << sum / 100 << " dollers";
}