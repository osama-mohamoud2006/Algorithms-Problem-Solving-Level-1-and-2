#include <iostream>
using namespace std;
float input() {
	float l;
	cout << "enter l: ";
	cin >> l;
	return l;
}
float area(float l) {
	return pow(l, 2) / (4 * 3.14);
}
void print(float area) {
	cout << "the area is " << area << endl;
}
int main() {
	print(area( input() ) );
}