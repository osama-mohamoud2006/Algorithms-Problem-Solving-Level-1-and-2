// this program takes num from user and check if it odd or even then print result
// we need iostream library only , i will use enum for easier more clean if cases 
// first function to enter number (done)
// second function to check number (done)
// third function to print result (done_)
#include <iostream>
using namespace std;
enum odd_or_even { odd = 1 , even =2  };
int input_num() { // used return value function bcz i need this value to make another operation 
	int num;
	cout << "enter number: ";
	cin >> num;
	return num;
}

odd_or_even check_num(int num) { // to check number 
	int result = num % 2;
	if (num % 2 == 0)
		return even;
	else
		return odd;
}
void print(odd_or_even num ) {
	if (num == odd_or_even::even )  // or (num == even )  
		cout << "the number is even ";
	else
		cout << "number is odd ";

}

int main() {
	print(  check_num( input_num() )  );
}