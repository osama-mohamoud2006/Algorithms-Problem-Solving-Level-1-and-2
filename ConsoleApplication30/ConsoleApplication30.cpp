#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random(int from , int to ) {
	int random = rand() % (to - from + 1) + from;
	return random; 
 }

// fill array 1 with random values
void fill_array1(int arr1[100], int &length) {
	cout << "enter length ";
	cin >> length;
	for (int a1 = 0; a1 < length; a1++)
	
		 arr1[a1] = random(1,100);
	cout << endl;
}
// fill array 2 with random values 
void fill_array2(int arr2[100], int length) {
	for (int a2 = 0; a2 < length; a2++)

		arr2[a2] = random(1, 100);
	cout << endl;
}
void sum_of_2_arrays(int arr1[100],int arr2[100],int arrs[100], int length) {
	for (int s = 0; s < length; s++) {
		arrs[s] = arr1[s] + arr2[s];
	}

}
void output_any_Array(int anyarr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << anyarr[o] << " ";
	cout << endl<<'\n';
}

int main() {
	int length = 0;
	int arr1[100];
	int arr2[100];
	int arrs[100];
	fill_array1( arr1,  length);
	cout << "the array 1 elements: ";
	output_any_Array(arr1, length); // output array1
	
	fill_array2(arr2, length);
	cout << "the array 2 elements: ";
	output_any_Array(arr2, length); // output array2

	sum_of_2_arrays(arr1, arr2, arrs, length);
	cout << "the sum of 2 arrays are: ";
	output_any_Array(arrs, length); // output array sum

}