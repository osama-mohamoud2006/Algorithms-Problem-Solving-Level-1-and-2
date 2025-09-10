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

///array 2
void copy(int arr[100],int arr2[100], int length)
{
	for (int a2 = 0; a2 < length; a2++)
		arr2[a2] = arr[a2];
}

void array_output(int arr[100], int length)
{
	
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100];
	int arr2[100];
	int length = 0;
	array_filled_with_random(arr, length);
	cout << '\n';
	// array 1 output
	cout << "array 1 output ";
	array_output(arr, length);
	cout << endl;
	copy(arr, arr2, length);
	cout << '\n';
	cout << "array 2 output ";
	array_output( arr2, length);
	cout << endl;


}