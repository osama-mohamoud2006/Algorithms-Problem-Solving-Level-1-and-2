#include <iostream>
using namespace std;

int enter_postive_number(){
	int n; 
	do {
		cout << "\nenter postive number: ";
		cin >> n;
	} while (0 >= n);

	return n;

}

void fill_array_according_to_entered( int number, int arr[100], int& count) {
	//arr[0] = enter_postive_number();
	//count = 1;
	//while (do_you_want_to_add() == true) {
	//	arr[count] = enter_postive_number();
	//	count++;
	//}
	

count++;
	arr[count-1] = number;
	


}

void do_you_want_to_add(int arr[100] , int &count ) {
	bool ok = true;
	
	do {
		fill_array_according_to_entered(enter_postive_number(), arr, count);
    cout << "\ndo you want to add more? \n [1] for yes , [0] for NAH ";
     cin >> ok;
	} while (ok == true );
	
	

	
	
}


void output(int arr[100] , int count) {
	cout << "array length is " << count << endl;
	cout << "so array elements are: ";
	for (int o = 0; o < count; o++)
		cout << arr[o] << " ";
	cout << '\n';
}

int main() {
	int arr[100];
	int count = 0; 
	
	do_you_want_to_add(arr, count);
	cout << endl;
	output(arr, count);
}