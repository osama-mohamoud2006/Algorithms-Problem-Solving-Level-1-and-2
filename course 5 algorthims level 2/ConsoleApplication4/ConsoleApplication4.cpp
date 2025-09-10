#include <iostream>
using namespace std;
int input(string text) {
	int number  = 0;
	do {
		cout << text << " ";
		cin >> number;
	} while (number <= 0);
	return number;
}
bool check(int it) {
	int sum = 0; 

	for (int i = 1; i < it; i++) {
		/// check perfect number
		if (it % i == 0) sum += i;
	}
	return sum == it;
}
void print(int number) {
	cout << "the perfect square are: " << endl;
	for (int i = 1; i < number; i++) {
		if (check(i)) cout << i << endl;
	}
}
int main() {
	print(input("enter number:"));
}