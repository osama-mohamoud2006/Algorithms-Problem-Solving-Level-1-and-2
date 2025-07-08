// use fill array function to  fill only distinct nums to array 2
#include <iostream>

using namespace std;

void hardcoded_array_(int arr[10], int length) {
	//array defined by user 
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
int check_is_number_exist(int number_to_check, int arr[10], int length) {
	for (int k = 0; k < length; k++) {
		if (arr[k] == number_to_check) return k; // return index
	}
		return -1;
}
bool is_number_exist_really(int number_to_check, int arr[10], int length) {
	return check_is_number_exist(number_to_check, arr, length) != -1; // then it is true 
}
void fill_array2_elements(int number, int& length2, int arr2[10]) {
	length2++;
	arr2[length2 - 1] = number;

}
void fill_array_with_distict_values(int arr[10], int arr2[10], int length, int& length2) {

	int number_before = 0;
	for (int d = 0; d < length; d++) {
//		if (arr[d] == number_before) continue; // is 10 ==0 (NO)  
//// is 10 ==10 (yes) the it will skip this number and add+1 to d so will continue loop 
//// 		   // is 20 ==20 (yes) the it will skip this number and add+1 to d so will continue loop 
//		// is 20 == 10 (NO)
//		fill_array2_elements(arr[d], length2, arr2); // then number=10
//		                                                     // the number =20  
//		number_before = arr[d]; // number_before = 10
//		                        //  number_before = 20
		number_before = arr[d];
		if (!is_number_exist_really(number_before, arr2, length) ) {
			fill_array2_elements(arr[d], length2, arr2);
		}
	}
	 



}
void output_any_array(int Anyarr[100], int length) {
	cout << "\n";
	for (int o = 0; o < length; o++)
		cout << Anyarr[o] << " ";
}

int main() {
	int length =10;
	int length2 = 0;
	int arr[10], arr2[10];
	hardcoded_array_(arr, length);
	
	cout << '\n';
	cout << "original array: ";
	output_any_array(arr, length);


	fill_array_with_distict_values(arr, arr2, length, length2);
	cout << endl;
	cout << "\n";
	cout << "only distinct nums: ";
	output_any_array(arr2, length2);
	cout << "\n";

}