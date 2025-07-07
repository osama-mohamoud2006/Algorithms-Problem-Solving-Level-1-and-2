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


void fill_array_according_to_entered(int number , int arr2[100], int& count) {
	
	/// number takes arr elements

	count++;
	arr2[count - 1] = number;



}

void _add(int length ,int arr[100], int arr2[100], int &count ) {
	
	for (int a = 0; a < length; a++) 
		
	
	
		
		fill_array_according_to_entered(arr[a], arr2, count);
	





}


void output(int arr[100], int length) {
	
	cout << "\nso array elements are: ";
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
	cout << '\n';
}

int main() {
	int arr[100];
	int arr2[100];
	int count = 0;
	int length = enter_postive_number("\nenter length: ");
	fill_array_with_random(arr, length);
	output(arr, length);
	_add(length, arr, arr2, count);
	output(arr2, length );
//
//	do_you_want_to_add(arr, count);
//	cout << endl;
//	output(arr, count);
}