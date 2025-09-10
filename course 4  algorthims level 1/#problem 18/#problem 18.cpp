#include<iostream>
using namespace std;
float input() {
	float r;
	cout << "enter radius: ";
	cin >> r;
	return r;
}
float area(float r){
	// pi* r `2 
	const  float pi = 3.141592653589793238;
	float  area = pi * pow(r, 2);
	 return area;
}
void print(float area) {
	cout << "the area is " << area << endl;

}
int main() {
	print(area(input()));
}