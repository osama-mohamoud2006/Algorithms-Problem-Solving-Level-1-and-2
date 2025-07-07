#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// input length 
const int size = 100;
int input(string text) {
	int l;
	do {
		cout <<text;
		cin >> l;
		if (0 >= l || l > ::size) cout << "\nenter again please! \n out of range! \n ";
	} while (0 >= l || l > ::size);
	return l;
}
///fill array with random values 
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void array_filled_with_random_values(int arr[::size], int length) {
	for (int i = 0; i < length; i++)
		arr[i] = random(1, 100);
cout << '\n';
}
//number to search 
short number_searching(int num_to_search, int arr[::size] , int length ) {
	
	cout << "\nthe number you entered to search is: " << num_to_search << '\n';
	for (int s = 0; s < length; s++) 
		if (arr[s] == num_to_search) return s;

return -1;
}
void output(int arr[::size], int length) {
	cout << "\nArray elements is: ";
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
}
int main() {
	srand((unsigned)time(NULL));
	int arr[::size];
	int length = input("enter the length of array: ");
	
	array_filled_with_random_values(arr, length);
	output(arr, length);

	int num_to_search = input("\n \nenter the number you want to search: ");
	short found = number_searching(num_to_search, arr, length);
	if (found == -1) {
		cout << "Not found :(" << endl;
	}
	else {
		cout << "number found at position: " << found << '\n' << "the number founded its order: " << found + 1 << endl;
	}




}
