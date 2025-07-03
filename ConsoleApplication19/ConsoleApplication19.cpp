#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int range(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random; 
}

int main() {
	srand((unsigned)time(NULL)); // to change the random var every time i run the program 
	
	for (int i = 1; i <= 4; i++) {
     cout << range(1, 10)<<" ";
	
	}
	cout << endl;
	
}