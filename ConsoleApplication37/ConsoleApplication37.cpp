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


void fill_array_according_to_entered(int number_from_array1 , int arr2[100], int &length2) {
	


	length2++;
	arr2[length2 - 1] = number_from_array1;



}

void arr1_to_arr2_copy(int length ,int arr[100], int arr2[100], int &length2 ) {
	
	for (int a1 = 0; a1 < length; a1++) 
	
		fill_array_according_to_entered(arr[a1], arr2, length2);

}


void output(int arr[100], int length) {
	
	
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
	cout << '\n';
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100];
	int arr2[100]; // nums came from array1 
	int length = enter_postive_number("\nenter length: ");
	int length2 = 0;
	
	fill_array_with_random(arr, length);
	cout << "\n so original  array elements are: ";
	output(arr, length);

	arr1_to_arr2_copy(length, arr, arr2, length2);
	cout << "\n so coppied array elements are: ";
	output(arr2, length );

}