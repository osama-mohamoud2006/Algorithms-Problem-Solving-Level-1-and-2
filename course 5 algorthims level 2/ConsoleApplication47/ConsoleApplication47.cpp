#include<iostream>
#include <cmath>
using namespace std;
float enter_number() {
	float n;
	cout << "enter number: ";
	cin >> n;
	return n;
}

double my_round(float n) {
	float number_with_fraction = n; //-10.7
	int number_without_fraction = int(n); // -10 
	double fraction = (number_with_fraction) - (number_without_fraction); // -0.7

	// number less than 5 is weak number,so we donot make round
	// ///////////first method ////////////////
	
	if (fraction > 0.0) { // fraction  is postive 
		if (abs(fraction) < 0.5) return  number_without_fraction;
		if (abs(fraction) >= 0.5) return  number_without_fraction + 1;
	}
	if (fraction < 0.0) { // fraction is negative 
		
		if (abs(fraction) < 0.5) return abs(number_without_fraction) * -1;
		else if(abs(fraction) >= 0.5) return  ( abs(number_without_fraction) +1 )*-1 ;
	}
	if (fraction == 0) return number_without_fraction;

	//second method
	//if (abs(fraction) >= 0.5) { // strong number 
	//	//postive 
	//	if (number_without_fraction > 0) return  ++number_without_fraction;
	//	/*else if (number_without_fraction == 0) return 0;*/ 
	//	//negative 
	//	else return number_without_fraction-1 ;
	//}
	//else return number_without_fraction;

}
int main()
{
	float n = 0.0;
	do {
		n = enter_number();
		cout << "\nthe round function i made: " << my_round(n);
		cout << "\n the cpp round: " << round(n) << endl;

	} while ("");
	
	cout << "\nthe round function i made: " << my_round(n);
	cout << "\n the cpp round: " << round(n)<<endl;
	
}