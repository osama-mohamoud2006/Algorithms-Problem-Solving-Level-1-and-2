#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random(int from , int to ) {
	int random = rand() % (to - from + 1) + from;
	return random; 
 }

int input_length() {
	int length; 
	do {
		cout << "enter length ";
		cin >> length;
		if (0 >= length || 100 < length) cout << "\nplease enter again! " << endl;
	} while (0 >= length || 100 < length);
	return length; 
}
// fill any  array  with random values
void fill_array(int anyarr[100], int length) {
	
	for (int a1 = 0; a1 < length; a1++)
	
		 anyarr[a1] = random(1,100);
	cout << endl;
}

void sum_of_2_arrays(int anyarr1[100],int anyarr2[100],int sumarr[100], int length) {
	for (int s = 0; s < length; s++) {
		sumarr[s] = anyarr1[s] + anyarr2[s];
	}

}
void output_any_Array(int anyarr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << anyarr[o] << " ";
	cout << endl<<'\n';
}

int main() {
	srand((unsigned)time(NULL));
	int length = input_length();
	int arr1[100];
	int arr2[100];
	int arrs[100];
	fill_array( arr1,  length); // fill array 1 
	cout << "the array 1 elements: ";
	output_any_Array(arr1, length); // output array1
	
	fill_array(arr2, length);  // fill array 2 
	cout << "the array 2 elements: ";
	output_any_Array(arr2, length); // output array2

	sum_of_2_arrays(arr1, arr2, arrs, length);
	cout << "the sum of 2 arrays are: ";
	output_any_Array(arrs, length); // output array sum

}