#include <iostream>
using namespace std;
int input(string text) {
	int n;
	do {
		cout << text;
		cin >> n;

	} while (0 >= n); 
		return n;
}

int  find(int n , int find_n ) {
	
	int rem = 0;
	int freq = 0;
	while (n > 0) {
		rem = n % 10; // get the last digit
		n = n / 10; // remove last digit 

			if (rem == find_n) freq ++; // if my number equals to rem add one to freq 
		
	}
	return freq;
}
int main(){
	int n = input("enter number: ");
	short find_n = input("enter the num you wanna to find: ");

			cout << "the freq of num " << find_n << " is " <<find(n , find_n) << endl;
}
