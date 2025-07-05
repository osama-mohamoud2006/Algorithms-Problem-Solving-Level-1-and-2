#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
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

void prime(int arr[100], int arr2[100], int length, int& count) {
	count = 0;
	for (int i = 0; i < length; i++) {

		int num = arr[i];
		if (num <= 1) continue; 

		bool isPrime = true;
		for (int p = 2; p * p <= num; p++) {
			if (num % p == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			arr2[count] = num;
			count++;
		}
	}
}

///array 2


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
	int count = 0; 
	array_filled_with_random(arr, length);
	cout << '\n';
	// array 1 output
	cout << "array 1 output ";
	array_output(arr, length);
	cout << endl;
	prime( arr, arr2,  length , count );
	cout << endl;
	

	cout << "array 2 output ";
	array_output(arr2, count);
	cout << endl;


}