#include <ctime>
#include <iostream>
#include<cstdlib>
using namespace std;
// fill array with elements from 1 to 100 ( randomly) 
short input_Length() {
	short l; 
	do {
		cout << "enter length: ";
		cin >> l;
	} while (0 >= l);
	return l;
cout << endl;

}
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
	cout << endl;

}
void full_array_with_random(int arr[100], int length) {
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
cout << endl;
}
// copy to array 2 
void copy_to_array2(int arr[100], int arr2[100] , int length) {
	
	//int count = 0;
	//solution 1
		//for (int j = length - 1; j >= 0; j--) {

		//	arr2[j] = arr[count]; //arr2[9]= arr[0]
		//	                      // arr2[9]= 1
		//	count++;
		//}
		
//===================================================================================//
	///////solution 2
	///arr[0] = arr[10]
	//note: length always in arr decreased by 1
	for (int k = 0; k < length; k++)
		arr2[k] = arr[( length-1) -k ];

	
cout<<"\n";
}
//output for any array 
void output(int Anyarr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << Anyarr[o] << " ";
}

int main() {
	int length = input_Length();
	int arr[100];
	int arr2[100];
	full_array_with_random(arr, length);
	cout << "the original array ";
	output(arr, length);
	cout << '\n';
	
	copy_to_array2(arr, arr2, length);
	cout << "after copied " ;
	output(arr2, length);
	cout << '\n';
}