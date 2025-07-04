#include <string>
#include <ctime>
#include<cstdlib>
#include <iostream>
using namespace std;
// function to make random
// switch with ASCII range values 
enum entype { capital = 1, small = 2, special = 3, nums = 4 };
int input() {
	int n;
	do {
		cout << "enter how many keys you wanna: ";
		cin >> n;
	} while (1 > n);
	return n;
}
int random(int from, int to) {
	int random_shit = rand() % (to - from + 1) + from;
	return random_shit;
}
char generate_shits(entype type) {

	switch (type) {
	case entype::capital:
		return  char(random(65, 90));


	case entype::small:
		return char(random(97, 122));

	case entype::special:
		return char(random(33, 47));


	case entype::nums:
		return char(random(48, 57));
	default:
		return 0;

	}
}
///////////////////////////////////////////////////////////////
string generate_unit(entype type,short length) {
	string unit = "";
	for (int i = 0; i < length; i++) {
		unit += generate_shits(type);
	}
	return unit;
}

string four_units() {
	string total_units = "";
	total_units = total_units + generate_unit(entype::capital, 4)
		+ "-" + generate_unit(entype::small, 4) + "-" + generate_unit(entype::capital, 4)
		+ "-" + generate_unit(entype::capital, 4);
	return total_units;
}

void final_output(int n ) {
	for (int o = 0; o < n; o++) {
		cout << "KEY" << "[" << o+1 << "]: ";
		cout << four_units() << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	final_output(input());
}