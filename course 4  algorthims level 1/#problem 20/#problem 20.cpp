#include <iostream>
using namespace std;
float input() {
	float a;
	cout << "enter area: ";
	cin >> a;
	return a;
}

float cricel_into_shape(float a) {
	return (3.14 * pow(a, 2)) / 4;
}
void print(float area_shape) {
	cout << "Circle area inscribed in a square " << area_shape << endl;
}
int main() {
	print(cricel_into_shape( input() ) );
}