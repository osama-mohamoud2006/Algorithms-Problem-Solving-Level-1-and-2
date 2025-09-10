#include <iostream>
using namespace std;
enum entype{add='+', sub = '-', division = '/', multi = '*' }; //to use it in switch case 
double input(string message) {
	cout << message  << endl; // to output the message i put  in int main()
	double n;
	cin >> n; //to enter number 
	return n;
}
// please note that i made one function and i will call it twice to enter 2 values 
entype calculate() { // to fill the enum function  with the desired op 
	cout << "enter the operation you want " << endl;
	char op; // + , - , / , *//
	cin >> op;
	return (entype)op;  // to convert from char to enum to call enum and use it 
}
// switch to make operation
double calac(double n1, double n2,entype op) {
	switch (op ) {
          case  '+':
			 return n1 + n2; // return works as break; so we can use return instead of break;
		  case '-':
			  return n1 - n2;
		  case '/':
			  return n1 / n2;
		  case'*':
			  return n1 * n2;
		  default:
			 
			 return n1+n2;

	 }
	cout << "----------------------------" << endl;
		
}
int main() {
	double n1 = input("enter number 1 "); // call function to enter first num
	double n2 = input("enter number 2 "); // """"""""""""""""""""""" second num
		cout << "-------------------------" << endl;
		entype operation = calculate();
	cout << "the result is " << calac(n1, n2, operation);

}