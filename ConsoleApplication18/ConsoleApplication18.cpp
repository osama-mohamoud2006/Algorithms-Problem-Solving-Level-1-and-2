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



string encrypt(string word , short key ) {
	

	
	for (int i = 0; i <= word.length(); i++) // walkthrough each char
		// m 
	{ 
		
		//int ascii_value = word[i]; // convert the current char to int value 
		// eq = ascii_value + 2;  // 109 is m , 109 +2 =111 // add 2 (As eq pattern needed )
		// word_encrypted += char(eq); // 111 is o // convert the eq to char and add it to var

		word[i] = char(int(word[i]) + key);
	

	}
	return word;

	
}
 
string decrypt(string word , short key ) {
	/*string un_encrypted = "";
	int formula = 0;*/
	for (int k = 0; k < word.length(); k++)
	{
		//int current_char_to_ascii_value = word_encrypted[k]; // converted current char to ascii value
		//formula = current_char_to_ascii_value - 2; // apllied the eq

		//un_encrypted += char(formula); // convert the result into char again and add it 
		word[k] = char(int(word[k]) - 2);


	}
	return word;
}


int main() {
	/// time for improvment
const short key = 2;
	string word = input(); // to ask about input one time
	string encryption = encrypt(word, key);
	string  without_encryption = decrypt(encryption, key);
	
	cout << endl;
	cout << "text before encryption: " << word << endl;
	cout<<"the text after encryption: " << encryption <<endl;
	cout << "text after decryption: " << without_encryption << endl;
	

}