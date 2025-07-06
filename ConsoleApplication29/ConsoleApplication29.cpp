#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
enum enprimeornor{prime  =1 , notprime = 2};
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
enprimeornor check_prime(int number) {
	if (number <= 1) return enprimeornor::notprime;
	int untill = number / 2; //7
	for (int i  = 2; i <= untill; i++)
		if (number % i == 0) {
			return enprimeornor::notprime;
		}
	return enprimeornor::prime;
}
void fill_array_with_random_values(int arr[100],int &length) {
	cout << "\n enter length: ";
	cin >> length;
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
	cout << "\n";
}
void copyToArray2(int arr[100],int arr2[100], int length, int& count) {
	count = 0;
	for (int i2 = 0; i2 < length; i2++)
		if (check_prime(arr[i2]) == enprimeornor::prime) {
			arr2[count] = arr[i2];
			count++;
		}

cout << "\n";
}
void output(int Anyarr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << Anyarr[o] << " ";
cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int arr2[100];
	int length = 0;
	int count = 0;
	fill_array_with_random_values(arr, length);
	cout << "array elements: ";
	output(arr, length);
	copyToArray2(arr,  arr2, length, count);
	cout << "the prime nums are: ";
	output(arr2, count);
}