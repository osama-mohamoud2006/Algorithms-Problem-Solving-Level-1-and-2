
#include<iostream>
using namespace std;

void hard_coded_filled_array(int arr[6], int& length) {
	arr[0] = 10; // 10
	arr[1] = 20; //20
	arr[2] = 30; // 30

	arr[3] = 30;//30
	arr[4] = 20; // 20

	arr[5] = 10; // 10
	

}

//void fill_array2(int number, int arr2[10], int& length2) {
//	// first index is 0 
//	length2++; // 0+1 = 1
//	arr2[length2 - 1] = number;  //1-1=0
//
//}

void reverse_fill (int arr[6], int length, int arr2[6], int length2) {

	for (int f = 0; f <length; f++) 
	 arr2[f] = 	arr[(length - 1) - f] ;
			
		
	

}
bool check_if_it_is_palindrom(int arr[6], int length, int arr2[6], int length2) {
	

	for (int j = 0; j < length; j++) {

		
			if (arr[j] != arr2[j]) return false;
		
		
		
	}
	
	return true;
}
void output_palindrom_result(int arr[6], int length, int arr2[6], int length2) {
	
	if (check_if_it_is_palindrom(arr, length, arr2, length2) == true) cout << "\nyes array is palindrom! ";
	else cout << "\nNo array isn't palindrom! ";
}

void output(int ANYarray[6], int length) {
	for (int o = 0; o < length; o++)
		cout << ANYarray[o] << " ";
}

int main() {
	int length = 6;
	int length2 = 6;
	int arr[6], arr2[6];
	// for the original array 
	hard_coded_filled_array(arr, length);
	cout << "the original array are: ";
	output(arr, length);
	cout << endl;
	cout << endl;
	

	reverse_fill( arr,  length, arr2, length2);
	cout << "the reversed array: ";
	output(arr2, length2);
	cout << endl;
	output_palindrom_result(arr, length, arr2, length2);
	
	
	cout << endl;

}