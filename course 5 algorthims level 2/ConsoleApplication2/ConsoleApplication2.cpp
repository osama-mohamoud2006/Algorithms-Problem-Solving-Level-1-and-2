#include <iostream>
using namespace std;
enum pornotp{prime =1 , notprime =2};
int input(string message) {
	int n;
	do {
		cout << message<<" ";
		cin >> n;
	} while (n <= 0);
	return n;
}

pornotp check(int n) {
	int p = sqrt(n);
	for (int i = 2; i <= p; i++) {
		if (n % i == 0) return notprime;

	}
	return prime;
}

void print(int n) {
	cout << '\n' << "the prime numbers: "<<endl;

	for (int i = 2; i <= n; i++) {
		if (check(i) == prime) cout << i << endl;
	}
}
int main() {
	print(input("enter postive num: "));
}