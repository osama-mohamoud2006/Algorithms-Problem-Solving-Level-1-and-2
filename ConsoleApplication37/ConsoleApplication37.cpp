#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int enter_postive_number(string text) {
	int n;
	do {
		cout << text;
		cin >> n;
	} while (0 >= n);

	return n;

}

int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fill_array_with_random(int arr[100], int length ) {
	for (int i = 0; i < length; i++) arr[i] = random(1, 100);
}
///////////////////////////////////////////////////////////////////////////////////////////////////


void fill_array_according_to_entered(int number , int arr2[100], int &length2) {
	
	/// number takes arr elements

	length2++;
	arr2[length2 - 1] = number;



}

void arr1_to_arr2_copy(int length ,int arr[100], int arr2[100], int length2 ) {
	
	for (int a = 0; a < length; a++) 
		
	
	
		
		fill_array_according_to_entered(arr[a], arr2, length2);
	





}


void output(int arr[100], int length) {
	
	
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
	cout << '\n';
}

int main() {
	int arr[100];
	int arr2[100];
	int length2 = 0;
	int length = enter_postive_number("\nenter length: ");
	fill_array_with_random(arr, length);
	cout << "\nso original  array elements are: ";
	output(arr, length);

	arr1_to_arr2_copy(length, arr, arr2, length2);
	cout << "\nso coppied array elements are: ";
	output(arr2, length );

}