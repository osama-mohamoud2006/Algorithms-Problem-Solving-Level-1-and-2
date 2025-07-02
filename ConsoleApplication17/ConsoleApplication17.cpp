#include <iostream>
using namespace std;
string input() {
	string n;
	
		cout << "enter 3 capital letters as your password : ";
		cin >> n;
		return n;
	
}
void trials(string n) {
	string word = "";
	bool found = false; 
	int count = 0; 
	for (int i = 65; i <= 90; i++) // first letter
	{
	

		for (int i2 = 65; i2 <= 90; i2++)  /// second letter
		{
			for (int i3 = 65; i3 <= 90; i3++) 
			{
				word = "";
				word += char(i);
				word += char(i2);
				word += char(i3);
				count++;
				
				 if (word == n) { 
					cout << "found password after " <<  count <<" trials " << endl;
					cout << "password is " << word << endl; 
					found = true;
					
				}
				 else   {
					 cout << "trial " << "[ " << count << " ]" << " : " << word << endl;
					
				 }
				   
				 if (found) break; 
				

			}

			if (found) break;
		}
	
		if (found) break;
	}



}

int main() {
	trials(input());
}