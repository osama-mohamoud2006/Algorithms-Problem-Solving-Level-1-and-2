#include <iostream>
using namespace std;
void input(float &a, float &h) {
	cout << "enter the base: ";
	cin >> a;
	cout << "enter the hieght: ";
	cin >> h;
}
float area(float a, float h) {
	float area =  (a/2)*h;
	return area;
}
void print(float area) {
	cout << "the area is " << area << endl;
}
int main() {
	float a = 0, h = 0;
	input(a, h);
	print( area(a,h) ) ;
}