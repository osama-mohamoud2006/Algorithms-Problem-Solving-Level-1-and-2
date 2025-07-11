#include <iostream>
#include <cmath>
using namespace std;
float input_number() {
	cout << "enter number to floor: ";
	float  n;
	cin >> n;
	return n;
}
double ceil_function(float n) {
	// 10.7 --> 11

	int INT_part_number = n; //10 
	float FLOAT_part = n; //10.7
	float fraction = FLOAT_part - INT_part_number; //0.7

	
	//if (n > 0.0) {  //postive 
	//	if (fraction == 0.0 ) return INT_part_number;
	//	else return  (FLOAT_part - fraction) + 1;
	//}
	//if (0.0 > n) { // negative 

	//	if ( fraction == -0.0) return INT_part_number;
	//	else return (abs(FLOAT_part - fraction) )*-1;
	//}


	//if (FLOAT_part == 0.0)return 0;
	
	// another solution 
	if ( abs(fraction) > 0) {
		//postive
		if (n > 0) return int(n) + 1;
		//negative 
		else return int(n);
	}
	// 
	else return int(n);

	
	


}
int main() {
	float  input = input_number();
	cout << "\nmy ceil function " << ceil_function(input);
	cout << "\nCPP floor: " << ceil(input) << endl;

}