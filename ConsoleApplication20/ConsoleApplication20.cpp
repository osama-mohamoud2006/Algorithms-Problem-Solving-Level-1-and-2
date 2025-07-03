#include <string>
#include <ctime>
#include<cstdlib>
#include <iostream>
using namespace std;
 
enum type { sletters = 1, cletters = 2, specialc = 3 , nums=4 };

int random(int from, int to)
{
	int random_value = rand() % (to - from + 1) + from;
	return random_value;
}
char output( type enchartype) {
	switch (enchartype){
	case sletters:
		return char(random(97, 122));
		
	case cletters:
		return  char(random(65, 90));

	case specialc: 
		return char(random(33, 47));

	case nums:
		return random(48, 57);
	}
	

}

int main() {
	srand((unsigned)time(NULL));
	cout << output(type::sletters) << endl;
	cout << output(type::cletters) << endl;
	cout << output(type::specialc) << endl;
	cout << output(type::nums) << endl;
}