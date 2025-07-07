#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int input_length() {
	int l;
	do {
		cout << "Enter the length: ";
		cin >> l;
	} while (0 >= l);
	return l; 
	cout << "\n";
}
void fill_Array_untill_N(int arr[100], int length ) {
	for (int i = 0; i < length; i++)
		arr[i] = i + 1;
	cout << "\n";
}
void shullfule(int arr[100], int length) {
	
	for (int a = 0; a < length; a++) // swap to make sullfule , random to take random values from 1 untill length
		swap(arr[random(1, length) - 1], arr[random(1, length) - 1]);
	
cout << "\n";
}
void output(int arr[100] , int length ) {
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));
	int length = input_length();
	cout << endl;
	int arr[100];
	cout << "the elements of array: ";
	fill_Array_untill_N(arr, length);
	output(arr, length);
	cout << endl;
	cout << "the array after shuffle: ";
	shullfule(arr, length);
	output(arr, length);

}