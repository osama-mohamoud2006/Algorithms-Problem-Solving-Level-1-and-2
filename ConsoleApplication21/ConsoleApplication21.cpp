#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// first ask user to input how many keys he wanna
// second make random function
// third make for loop from 1 to inputed value and generate n lines of random things

int input() {
	int n;
	do {
		cout << "enter how many keys you want: ";
		cin >> n;

	} while (1 > n);
	return n;
}

int random(int from, int to) {
	int random_shit = rand() % (to - from + 1) + from;
	return random_shit;

}
string random_generator() {
	string res = "";
	for (int r = 1; r <= 4; r++) {
		res += char(random(65, 90)); //WXCY

		//OEDF
	}
	return res;
}
void generated_keys(int n) {
	int count = 0;
	
	for (int i = 1; i <= n; i++) {
		count++;
		cout <<"Key " << "[ " << count << " ]: ";
		
		cout << random_generator()<<"-" << random_generator()<<"-"<< random_generator()<<"-"<< random_generator() << endl;
		
	}
}

int main() {
	srand((unsigned)time(NULL));
	generated_keys(input());
}