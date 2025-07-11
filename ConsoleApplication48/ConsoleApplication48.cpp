#include <iostream>
#include <cmath>
using namespace std;
float input_number() {
	cout << "enter number to floor: ";
	float  n; 
	cin >> n;
	return n;
}
double floor_function (float n ){
	// 10.7 
/*floor() function takes floating point number as input
and returns the largest integer that is smaller than or
equal to the value passed as the argument.*/
	int INT_part_number = n; //10 
	float FLOAT_part = n; //10.7
	float fraction = FLOAT_part-INT_part_number ;

	//postive 
	if (n > 0.0) return  FLOAT_part- fraction;

	if (0.0 > n) { // negative 

		if (fraction == 0.0 || fraction == -0.0) return INT_part_number;
		else return(FLOAT_part - fraction) - 1;
	} 
	
	
	if (FLOAT_part == 0.0)return 0;

}
int main() {
	float  input = input_number();
	cout << "\nmy floor function "<<floor_function(input);
	cout << "\nCPP floor: " << floor(input)<<endl;
	
}