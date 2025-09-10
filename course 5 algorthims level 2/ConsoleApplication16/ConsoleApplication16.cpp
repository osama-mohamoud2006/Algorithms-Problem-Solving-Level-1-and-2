#include <iostream>
#include <string>
using namespace std;


void print() {

	//// we will make 3 loops ////
	// first loop will changed after the 2 nested loops finished
	// the pattern is AAA,AAB , AA(A -> Z )
	// after the the last char becomes Z the the second loop will increase by 1 letter
	// ABA, ABB , ABC , ABD , AB(A->Z)
	// ACA, ACB , ACC , ACD , ACE , AC(E->Z)
	// AZZ , BAA , BAB , BAC ,......... BCA , BCD , BC(B->z) 
	// BZZ , CAA , CAB ,CAC
	string word = " ";
	for (int i = 65; i <= 90; i++) { // first char 
		for (int i2 = 65; i2 <= 90; i2++) { // the second char 
	  for (int i3 = 65; i3 <= 90; i3++) { // the last char 
					 word.append(1,char(i));
					 word.append(1, char(i2));
					 word.append(1, char(i3));
					 cout << word << endl;  // after finshing as example AAC print word
					 word = ""; // then clean it to view the new word correctly 
			}
				  }
		
		cout << "________________________" << endl;
}

	

}

int main() {
	print();

}