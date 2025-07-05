#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int random(int from , int to) {
	int random_v = rand() % (to - from + 1) + from;
	return random_v;
}
void input(int arr[100] , int &length) {
	cout << "enter the length: ";
	cin >> length;
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
}
int min(int arr[100] , int length  ) {
	int min = arr[0];
	for (int m = 0; m < length; m++)
		if (min > arr[m]) min = arr[m];
	return min;
}
void output_Array(int arr[100], int length)
{
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
}

int main()
{
	srand((unsigned)time(NULL));
	int length = 0; 
	int arr[100];
	input(arr, length);
	cout << endl;
	output_Array(arr, length);
	cout << endl;
	cout << "the min value is " << min(arr, length) << endl;

}