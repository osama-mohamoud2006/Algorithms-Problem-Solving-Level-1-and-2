#include <iostream>
using namespace std;
void print_header() {
	cout << "\t \t \t \t \t " << "multiplication table from 1 to 10 " << "\t" << endl<<endl;
	int h = 1;
	cout << '\t';
	while (h < 11) {
		cout << h << "\t";
		h++;

	}
	cout << "\n____________________________________________________________________________________________\n" << endl;
}
string print_sperator(int i) {
	if (i < 10) return " | ";
	else return "| ";
}

void real_table() {
	print_header();
	for (int i = 1; i <= 10; i++) {
		cout << " " << i << print_sperator(i)<<' ';
	
		for (int j = 1; j <= 10; j++) {
			cout <<' ' << i * j << '\t';
		}
		cout << endl;
	}
	
}
int main() {
	
	real_table();
}