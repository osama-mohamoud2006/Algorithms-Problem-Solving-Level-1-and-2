#include <iostream>
using namespace std;
// input
int input() {
	int n=0;
	cout << "enter number ";
	cin >> n;
	return n;

}
// do while -99 will break the function
void result(int n) {
	int sum = 0  , readnumber=0 ; //10,
	do {
		 readnumber = input(); //10 ,20
		if (readnumber == -99) {
			break;
		}
		else //0+10
			//10+20
			//30+40
		sum = sum+ readnumber; // 20 +
		
		// message
	} while (readnumber!=-99);

	cout << "the sum is " << sum <<endl;
}
int main() {
	int n = 0; // we donot need the input()
	// bcz i recalled it in result function
	result( n);
	return 0;
}