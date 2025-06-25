#include <iostream>
#include <string>
using namespace std;

int input() {
	int w;
	do {
cout << "enter nums in one line: ";
	cin >> w;
	
	} while (0 >= w);
	
	return (w);
}
/// converts number to string 
void convert(int num) {
	int rem = 0; // to store the final degit
	///////123//////
	while (num > 0) {
		rem = num % 10; /// 12.3 -- rem: 3
		// 12 -- 1.2 -- 2
		//1 -- 0.1 -- 1
		num = num / 10; // 12 
		// 12/10 -- 1
		// 1/10 --- 0 
		cout << rem << endl;
	}
}
int main() {
	convert(input());
}