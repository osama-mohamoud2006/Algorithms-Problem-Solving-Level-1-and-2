#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void fill_array(int arr[100], int& length) {
	cout << "Enter length: ";
	cin >> length;
	for (int i = 0; i < length; i++)
		arr[i] = random(-100, 100);
}
int count_postive_nums(int arr[100], int length) {
	int count = 0;
	for (int c = 0; c < length; c++) {

		if (arr[c] >  0) count++;
	}
	return count;
}
void print(int arr[100], int length) {
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
}
int main() {
	srand((unsigned)time(NULL));
	int length = 0;
	int arr[100];
	fill_array(arr, length);
	cout << "\nThe array elements are: ";
	print(arr, length);

	cout << "\n the count of postive numbers are: " << count_postive_nums(arr, length) << endl;

}