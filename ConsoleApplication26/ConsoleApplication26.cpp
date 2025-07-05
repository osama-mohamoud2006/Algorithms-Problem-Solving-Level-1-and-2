#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 
int random(int from, int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}
 void array_filled_with_random (int arr[100], int & length)
 {
	 cout << "enter length ";
	 cin >> length;
	 for (int i=0; i < length; i++)
		 arr[i] = random(1, 100);
 }
 void array_output(int arr[100], int length)
 {
	 for (int o = 0; o < length; o++)
		 cout << arr[o] << " ";
 }
 int sum(int arr[100], int length) {
	 int sum = 0; 
	 for (int s = 0; s < length; s++) {
             sum += arr[s];
	 }
		 
	 return sum;  
 }

 int main()
 {
	 srand((unsigned)time(NULL));
	 int arr[100];
	 int length = 0; 
	 array_filled_with_random(arr, length);
	 cout << endl;
	 array_output(arr, length);
	 cout << endl;
	 cout << "The sum is " << sum(arr , length) << endl;

 }