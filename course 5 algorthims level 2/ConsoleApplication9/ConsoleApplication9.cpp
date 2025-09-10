#include <iostream>
#include <string>
using namespace std;
int input(string text) {
	int n;
	do {
		cout << text;
		cin >> n;

	} while (0 >= n);
	return n;
}

int find(int n, int find_n) {
	// n is number by user 
	int rem = 0;
	int freq = 0;
	while (n > 0) {
		rem = n % 10; // get the last digit  //4 
		n = n / 10; // remove last digit 

		if (rem == find_n) freq++; // if my number equals to rem add one to freq 

	}
	
	return freq;
	
	
}
// n your number
// find_n the number touu search 
void find(int n) { // pass nums from 1 to 10 to find-function to search how many times the number passed repeated
	int i = 0;
	for ( i = 0; i < 10; i++) {
		if (find(n, i) == 0)continue; // to hide the numbers that have 0 repeation 
		else
		 cout << "the freq of " << i << " is "<< find(n, i)<<endl;
 }
}



int main() {
	int n = input("enter number: ");
	find(n);
}
