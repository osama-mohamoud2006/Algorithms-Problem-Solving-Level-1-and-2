#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int random(int from, int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}
// array 1 
void array_filled_with_random(int arr[100], int& length)
{
	cout << "enter length ";
	cin >> length;
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
}
void array1_output(int arr[100], int length)
{
	cout << "array 1 output ";
	for (int o1 = 0; o1 < length; o1++)
		cout << arr[o1] << " ";

	cout << endl;
}


///array 2
void array2_filled_with_array1(int arr[100],int arr2[100], int length)
{
	for (int a2 = 0; a2 < length; a2++)
		arr2[a2] = arr[a2];
}

void array2_output(int arr2[100], int length)
{
	cout << "array 2 output ";
	for (int o = 0; o < length; o++)
		cout << arr2[o] << " ";
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100];
	int arr2[100];
	int length = 0;
	array_filled_with_random(arr, length);
	cout << endl;
	array1_output(arr, length);
	cout << endl;
	array2_filled_with_array1(arr, arr2, length);
	cout << endl;
	array2_output( arr2, length);
	cout << endl;


}