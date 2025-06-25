//#include<iostream>
//using namespace std;
//enum perfectornot{perfect =1 ,notperfect =2};
//int input(string message) {
//	int n;
//	do {
//		cout << message << " ";
//		cin >> n;
//	} while (n <= 0);
//	return n;
//}
//int sum(int n ) {
//	int sum = 0;
//	for (int i = 1; i < n; i++) {
//		if (n % i == 0) sum += i;
//	}
//	return sum;
//}
//perfectornot check(int n) {
//	if (sum(n) == n) return perfect;
//	else return notperfect;
//}
//void print(int n ) {
//	if (check(n) == perfect) cout << "it is perfect number ! " << endl;
//	else cout << "it isn't perfect number ! " << endl;
//}
//int main() {
//	print(input("enter postive number: "));
//}

#include<iostream>
using namespace std;

int input(string message) {
	int n;
	do {
		cout << message << " ";
		cin >> n;
	} while (n <= 0);
	return n;
}
bool check(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if(n%i==0) sum += i;
	}
	return sum == n; // will return 1 if true and return 0 if it false
}
void print(int n) {
	if (check(n)) cout << "IT IS PERFECT NUMBER! " << endl;
	else cout<< "IT ISN'T PERFECT NUMBER! " << endl;
}
int main() {
	print(input("enter postive number: "));
}