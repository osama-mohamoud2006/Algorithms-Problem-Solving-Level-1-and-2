#include <iostream>
#include <cmath>
using namespace std;
float input_number() {
	cout << "enter number to floor: ";
	float  n;
	cin >> n;
	return n;
}

double sqrt_function(float number) {
	return pow(number, 0.5);

}
int main() {
	float  input = input_number();
	cout << "\nmy sqrt function " << sqrt_function(input);
	cout << "\nCPP sqrt: " << sqrt(input) << endl;
}