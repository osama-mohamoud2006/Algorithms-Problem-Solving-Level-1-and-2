#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int random(int from, int to) {
	int random_nums = rand() % (to - from + 1) + from;
		return random_nums;
}

void array_input(int arr[100], int &length) {
	/// fill array according the n value 
	cout << "enter the length of array ";
	cin >> length;
	for (int i = 0; i < length; i++) 
		arr[i] = random(1, 100);
	
}


void ouput(int arr[100], int length) {
	cout << "array: ";
	for (int o = 0; o < length; o++) {
		cout << arr[o] << " ";
	}
	cout << endl;
}



int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int length = 0;
	array_input(arr, length);
	cout << endl;
	

	ouput(arr, length);
	cout << endl;
	

}