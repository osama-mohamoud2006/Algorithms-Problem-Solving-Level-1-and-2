#include <iostream>
using namespace std;
float  input( float d){
   
	cout << "enter diameter: ";
	cin >> d;
	return d;
	
}
float area(float d) {
	const float pi = 3.14;
	return  (d*pi) / 4;
}
void print(float area) {
	cout << "the area is " << area << endl;
}
int main() {
	float d = 0;
	print(area(input(d)));
}
