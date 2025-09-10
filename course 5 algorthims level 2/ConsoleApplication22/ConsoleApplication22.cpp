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

void array_input(int arr[100] , int n) {
	/// fill array according the n value 
	for (int i = 0; i < n; i++) {
		cout << "Element [" << i + 1 << "]" << " ";
		cin >> arr[i];
		if (arr[i] == n - 1) break;
	}
}
int  repeat(int n, int length, int arr[100]) {
	// call input again -> n 
	// to find array according to length 
	int count = 0;

	for (int f = 0; f < length; f++) {
		if (n == arr[f]) count++;
	}
	return count;
}

void ouput__original(int arr[100] , int length) {
	cout << "original array: ";
	for (int o = 0; o < length; o++) {
		cout << arr[o] << " ";
	}
	cout << endl;
}

void print_repeat(int n,int length , int arr[100]) {
	
	
	cout << n << " is " << "repeated " << repeat(n, length, arr) << " Time(s)" << endl;
	 
}

int main() {
	int arr[100];
	int length = input ("enter how many elements you wanna: ");
	cout << endl;
	array_input( arr, length);
	cout << endl;
	int n  = input("Enter the number you want to check: "); 
	cout << endl;
	ouput__original(arr, length);
	cout << endl;
	print_repeat(n, length, arr);

}