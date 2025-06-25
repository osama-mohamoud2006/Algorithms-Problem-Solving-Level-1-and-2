#include <iostream>
#include <string>
using namespace std;
int input(string text) {
	int n; 
	do { cout << text;
	cin >> n;

	} while (0 >= n);
	return n;
}
// sum of digits
//void sum(int n) {
//	int sum = 0;
//	int rem = 0;
//	while (n > 0) {
//		rem = n % 10;
//		n = n / 10;
//		sum += rem;
//	}
//	cout << "the sum is : " << sum << endl;
//}
int  sum_c(int n) {
	string num = to_string(n);
	int sum = 0;
	int to_num ;
	for (int i = 0; i < num.length(); i++) {
		to_num = num[i] - '0'; // coverted to num again 
		sum += to_num;
	}
	return sum; 

}
void sum_output(int sum ) {
	cout << "the sum is " << sum << endl;
}

int main() {
	sum_output(sum_c(input("enter postive number: ") ) );
}