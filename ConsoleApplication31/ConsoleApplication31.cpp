#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
int length() {
	int length;
	cout << "\n enter the length you want: ";
	cin >> length;
	return length;
}
void fill_array(int arr[100] ,int length  ) {
	
	for (int i = 0; i < length; i++) {
		arr[i] = i + 1;
	}
}

void array_shullfed(int arr[100], int length) {
	
	
	for (int s = 0; s < length; s++) {
		int index1 = random (1, length) -1 ;
		int index2 = random(1, length) - 1;
		cout << "so the index is: " << index1 <<  endl;
		
		while (index1 == index2) {
			index2 = random(1, length) - 1;
		}

		
	
		swap( arr[index1] , arr[index2]);

		

	}
}

void output(int arr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
	
}

int main() {
	 srand( (unsigned) time(NULL) );
	int arr[100];
	int lengthi = length();  // 10 
	fill_array(arr, lengthi);
	cout << endl;
	cout << "the original array: ";
	output(arr, lengthi);
	cout << endl;

	array_shullfed(arr, lengthi);
	cout << endl;
	cout << "the shullfed array: ";
	output(arr, lengthi);
	cout << endl;
}