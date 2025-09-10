
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

bool  check_if_it_is_palindrom(int arr[6], int length) {

	for (int f = 0; f < length; f++) {
		if (arr[(length - 1) - f] != arr[f]) return false;
	}
	
	return true;
		
	

}
void output_palindrom_result(int arr[6], int length) {
	
	if (check_if_it_is_palindrom(arr, length) == true) cout << "\nyes array is palindrom! ";
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
	

	

	output_palindrom_result(arr, length);
	
	
	cout << endl;

}