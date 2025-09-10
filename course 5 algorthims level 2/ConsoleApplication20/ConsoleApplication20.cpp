#include <string>
#include <ctime>
#include<cstdlib>
#include <iostream>
using namespace std;
 // function to make random
// switch with ASCII range values 
 enum entype{capital=1 , small =2 , special =3 , nums = 4};
int random(int from , int to ) {
	int random_shit = rand() % (to - from + 1) + from;
	return random_shit;
 }

char output(entype type) {
	
	switch (type) {
	case entype::capital :
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

int main()
{
	srand((unsigned)time(NULL));
	cout << output(entype::small) << endl;
	cout << output(entype::capital) << endl;
	cout << output(entype::special)<<endl;
	cout << output(entype::nums) << endl;

}