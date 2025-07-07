#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// first create first unit of key
// first unit contains from 4 random characters
int input_length() {
	int l;
	do {
		cout << "\nEnter Length: ";
		cin >> l;
	} while (0 >= l);
	return l;
}
int random(int from, int to) {
	return rand() % (to - from + 1) + from;
	
}
string get_unit_of_key(int length_of_unit) {
	string unit_of_key = "";
	for (int i = 0; i < length_of_unit; i++)
		unit_of_key += char(random(65, 90));
return unit_of_key;
}
string full_key_unit(int length_of_unit) {
	return get_unit_of_key(4) + "-" + get_unit_of_key(4) + "-" + get_unit_of_key(4) + "-" + get_unit_of_key(4);
}
void fill_array_with_key( string arr[100], int length) {
	
	for (int i = 0; i < length; i++)
		arr[i] = full_key_unit(4);
	
}
void output( string arr[100] , int length ) {

	for (int o = 0; o < length; o++)
		cout <<"Array "<<"["<<o<<"]: " << arr[o] << endl;
}

int main() {
	srand((unsigned)time(NULL) );
	int length = input_length();
	cout << '\n';
	string arr[100];
	fill_array_with_key(arr,length);
	output(arr, length);
	
}