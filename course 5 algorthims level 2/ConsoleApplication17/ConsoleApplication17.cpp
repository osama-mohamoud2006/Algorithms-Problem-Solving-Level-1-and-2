//// steps
// input word by user
// get the pattern AAA
// compare pattern with input 
// cout steps untill reach the target
// if input == pattern break all loops 

#include <iostream>
#include <string>
using namespace std;
string input() {
	cout << "enter password: ";
	string p;
	cin >> p;
	return p;
}

bool get_password(string p) {
	string word = ""; // word var to store result 
	int count = 0; // to count how many times untill reach the target 
	// first letter
	for (int i = 65; i <= 90; i++) // 65 is A , 90 is Z in ASCII
	{
		for (int i2 = 65; i2 <= 90; i2++) // second letter 
		{
			for (int i3 = 65; i3 <= 90; i3++) //// last word 
			{
				word = ""; // wmpty the word after each loop
				word += i; // add first letter to word
				word += i2; /// second
				word += i3; // third
				count++;
				cout << "trial " << "[ " << count << " ] " << word << endl;
				if (word == p ) {
					cout << endl;
					cout << "the password is " << (word) << endl;
					cout << "Found after " << count << " trials" << endl;
					return true ; // exit after that 

				}
				


			}
		}
		return false;
	}


}


int main() {

	get_password(input());
}