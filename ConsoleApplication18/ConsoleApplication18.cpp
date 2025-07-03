/// input word by user
// make the logic of encryption
///// the logic of encryption //////
// take each word from user input and jump 1 letter as example A -> C

#include <iostream>
#include <string>
using namespace std;

string input() {
	cout << "enter word to encrypt: ";
	string in;
	cin >> in;
	return in;
}

void before(string word) {
	cout << '\n';
	cout << "text before encryption: " << word << endl;
}

void encrypt(string word , string  &word_encrypted) {
	  word_encrypted = "";
	int eq = 0;
	
	for (int i = 0; i <= word.length(); i++) // walkthrough each char
		// m 
	{ 
		
		int ascii_value = word[i]; // convert the current char to int value 
		 eq = ascii_value + 2;  // 109 is m , 109 +2 =111 // add 2 (As eq pattern needed )
		 word_encrypted += char(eq); // 111 is o // convert the eq to char and add it to var
	

	}
	cout << "text after encryption: " << word_encrypted << endl;

	
}
 
void decrypt(string word_encrypted) {
	string un_encrypted = "";
	int formula = 0;
	for (int k = 0; k < word_encrypted.length(); k++)
	{
		int current_char_to_ascii_value = word_encrypted[k]; // converted current char to ascii value
		formula = current_char_to_ascii_value - 2; // apllied the eq

		un_encrypted += char(formula); // convert the result into char again and add it 

	}
	cout << "text after decryption: " << un_encrypted << endl;
}


int main() {
	string word = input(); // to ask about input one time
	string word_encrypted = ""; // intialize
	before(word);
	encrypt(word , word_encrypted);
	decrypt(word_encrypted);
}