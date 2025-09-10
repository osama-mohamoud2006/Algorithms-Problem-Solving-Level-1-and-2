#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int const size = 100;
int random(int from , int to) {
	int randomv = rand() % (to - from + 1) + from;
	return randomv;
}
void fill_Array(int arr[::size], int &length) {
	do {
cout << "enter length: ";
	cin >> length;
	} while (::size < length ||0>=length);
	
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
}
void output_filled(int arr[::size], int length) {
	cout << "Array Elements ";
	for (int k = 0; k < length; k++)
		cout << arr[k] << " ";
	cout << endl;
}
int get_max(int arr[::size], int length)
{
	int max = arr[0];
	for (int find = 0; find < length; find++)
		if (arr[find] > max) max = arr[find];

	
	return max;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int length = 0;

	fill_Array(arr, length);
	cout << endl;
	output_filled(arr,  length);
	cout << "Max Number is: " << get_max(arr, length) << endl;

}