// use fill array function to  fill only odd nums to array 2
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
int input(string text) {
	int n;
	do {
		cout << text;
		cin >> n;
	} while (0 >= n);
	return n;
}
void fill_array_with_random_values(int arr[100], int length) {
	// length will be assigned by user
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
}
void fill_array2_elements(int number, int& length2, int arr2[100]) {
	length2++;
	arr2[length2 - 1] = number;

}
int check_prime(int number) {
	if (number <= 1) return 0;
	int untill = number / 2; // 10 /2 = 5 
	for (int c = 2; c <= untill; c++) {
		if (number % c == 0) return 0;

	}
	return number;



}
void fill_array_with_odd_values(int arr[100], int arr2[100], int length, int& length2) {
	//arr[100] is the main array 
	// arr2[100] is target array 
	// length is original array length 
	int prime_to_fill = 0;
	for (int p = 0; p < length; p++) {
		prime_to_fill = check_prime(arr[p]);
		if (prime_to_fill == 0) continue;
		else  fill_array2_elements(prime_to_fill, length2, arr2);
	}
}
void output_any_array(int Anyarr[100], int length) {
	cout << "\n";
	for (int o = 0; o < length; o++)
		cout << Anyarr[o] << " ";
}

int main() {
	srand((unsigned)time(NULL));
	int length = input("enter the length of array: ");
	int length2 = 0;
	int arr[100], arr2[100];
	fill_array_with_random_values(arr, length);
	cout << '\n';
	cout << "original array: ";
	output_any_array(arr, length);


	fill_array_with_odd_values(arr, arr2, length, length2);
	cout << endl;
	cout << "\n";
	cout << "only odd nums: ";
	output_any_array(arr2, length2);
	cout << "\n";

}