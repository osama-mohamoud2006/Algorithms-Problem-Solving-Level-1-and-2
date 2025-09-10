#include <iostream>
#include <cmath>
using namespace std;
void input(float &a, float &d) {
	cout << "enter area ";
	cin >> a;
	cout << "enter d ";
	cin >> d;
}
float area(float a, float d) {
	return a * sqrt(pow(d, 2) - pow(a, 2));
}
void print(float area) {
	cout << "the area is " << area << endl;
}
int main() {
	float a = 0, d = 0;
	input(a, d);
	print(area(a, d));
}