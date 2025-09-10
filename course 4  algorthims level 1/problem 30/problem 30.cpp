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
//checkprime number
enum entype { prime = 1, notprime = 2 };
entype check(int n) {
	cout << "----------------" << endl;
	// 2methods i have
	// my  method 
	// abu hadhoud method
	// abu hadhud .1
	//.1
	if (2 > n) {
		return entype::notprime;
	}
	
	int m = round(n / 2);
	for (int i = 2; i < n; i++) {
		if (n % i == 0) //23/2
			return entype::notprime;
			
	}
	return entype::prime;


}
void print(int n ) {
	
	if ( check(n) ==prime) { // call function not enum 
		cout << "prime " << endl;
	}
		
	else
	{
		cout << "not prime " << endl;
	}
}
int  main() {
		print(input("plz enter postive number: "));
}