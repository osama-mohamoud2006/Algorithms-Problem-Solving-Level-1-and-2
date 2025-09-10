#include <iostream>
using namespace std;
void input(float& a, float& b) {
	cout << "enter a " << endl;
	cin >> a;
	cout << "enter b: ";
	cin >> b;
}
float area(float a, float b) {
	const float pi = 3.141592653589793238;
	return pi * ( pow(b, 2) / 4 ) *(  (2*a-b)/(2*a+b) ) ;
}
void print(float a , float b) {
	cout << "the area is " << area(a, b) << endl;
}
int main() {
	float a = 0, b = 0;
	input(a, b);
	print(a,b);
}