#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
enum enprimeornor{prime  =1 , notprime = 2};
int random(int from, int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}
enprimeornor prime_or_not(int number) {
	if (number <= 1) return enprimeornor::notprime;
	int untill = number / 2;
	for (int i = 2; i <= untill; i++) {
		if (number % i == 0) return enprimeornor::notprime;
	}
	return enprimeornor::prime;
}
// array 1 
void array_filled_with_random(int arr[100], int& length)
{
	cout << "enter length ";
	cin >> length;
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
}

void primeout(int arr[100], int arr2[100], int length, int& count) {
	count = 0; 
	for (int a1 = 0; a1 < length; a1++)
		if (prime_or_not(arr[a1]) == enprimeornor::prime) {
			arr2[count] = arr[a1];
			count++;
		}
}

///array 2


void array_output(int arr[100], int length)
{

	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
}

int main() {
	enprimeornor type;
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
	primeout(arr, arr2,  length , count );
	cout << endl;
	

	cout << "array 2 output ";
	array_output(arr2, count);
	cout << endl;


}