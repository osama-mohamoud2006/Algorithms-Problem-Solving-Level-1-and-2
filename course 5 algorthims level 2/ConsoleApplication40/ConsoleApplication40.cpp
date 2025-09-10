
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void hard_coded_filled_array(int arr[10], int &length) {
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;

	arr[3] = 50;
	arr[4] = 50;

	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;

	arr[9] = 90;

}

int check_the_availabilty_of_number_in_array(int number, int ANYarray[10] , int length) {
	for (int c = 0; c < length; c++)
		if (ANYarray[c] == number) return c;

return -1;
}

bool Number_is_available(int number, int ANYarray[10], int length) {
	return check_the_availabilty_of_number_in_array(number, ANYarray, length) != -1;
	//if it isn't equal to -1 then it is true , true means that the number is exist in array
}

void fill_array2(int number , int arr2[10] , int &length2) {
	// first index is 0 
	length2++; // 0+1 = 1
	arr2[length2-1] = number;  //1-1=0

}

void check_then_fill_distinct(int arr[10],int length , int arr2[10] ,int &length2) {
	// walk through array1 , if the number that from Array1 isn't existing in array two then fill
	// array2 with this number 
	for (int f = 0; f < length; f++) {
		if (!Number_is_available(arr[f], arr2, length))
			fill_array2(arr[f], arr2, length2);

	}

}

void output(int ANYarray[10], int length) {
	for (int o = 0; o < length; o++)
		cout << ANYarray[o] << " ";
}

int main() {
	int length = 10;
	int length2 = 0; 
	int arr[10], arr2[10];
	// for the original array 
	hard_coded_filled_array(arr, length);
	cout << "the original array are: ";
	output(arr, length);
	cout << endl;
	cout << endl;
	//for the distinct array 
	check_then_fill_distinct(arr, length, arr2, length2);
	cout << "the distinct numbers are: ";
	output(arr2, length2);
	cout << endl;

}