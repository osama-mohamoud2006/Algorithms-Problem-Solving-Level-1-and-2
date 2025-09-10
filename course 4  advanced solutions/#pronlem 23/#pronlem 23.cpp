#include <iostream>
#include<cmath>
using namespace std;
void input(float& a, float& b , float& c) {
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c:";
	cin >> c;
}
float area(float a, float b, float c) {
	float p = (a + b + c) / 2;
	const float pi = 3.141592653589793238;
	float up = (a * b * c);
	float down = ( 4 * sqrt(p * (p - a) * (p - b) * (p - c) ) );
	float process = (  up /  down  ) ;
	float area = pi * pow(process, 2);
	return  area;
 }
void print(float a , float b , float c) {
	cout << "the area is " << area(a,b,c) << endl;
}
int main() {
	float a = 0, b = 0, c = 0;
	input(a, b, c);
	print(a,b,c);
}