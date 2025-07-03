#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// first ask user to input how many keys he wanna
// second make random function
// third make for loop from 1 to inputed value and generate n lines of random things
enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
// input the num of keys 
int input() {
	int n;
	do {
		cout << "enter how many keys you want: ";
		cin >> n;

	} while (1 > n);
	return n;
}
// generate random value
int RandomNumber(int from, int to) {
	int random_shit = rand() % (to - from + 1) + from;
	return random_shit;

}
// get random things based on enum input 
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        // Generate a random lowercase letter (ASCII: 97 'a' to 122 'z').
        return char(RandomNumber(97, 122));
        break; // break is not necessary after return.
    }
    case enCharType::CapitalLetter:
    {
        // Generate a random uppercase letter (ASCII: 65 'A' to 90 'Z').
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        // Generate a random special character (ASCII: 33 '!' to 47 '/').
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        // Generate a random digit (ASCII: 48 '0' to 57 '9').
        return char(RandomNumber(48, 57));
        break;
    }
    }
    // If no valid type is provided, return a null character.
    return '\0';
}

// call random geneatror to make word 
string random_generator(enCharType type) {
    //geneate one word with 4 letters 
	string res = "";
	for (int r = 1; r <= 4; r++) {
		res += GetRandomCharacter(type); //WXCY

		//OEDF
	}
	return res;
}

void key() {
    string Key = "";
    Key = random_generator(enCharType::CapitalLetter) + "-";
    Key = Key + random_generator(enCharType::CapitalLetter) + "-";
    Key = Key + random_generator(enCharType::CapitalLetter) + "-";
    Key = Key + random_generator(enCharType::CapitalLetter);
    cout << Key;
}

void generated_keys(int n) {
	int count = 0;
	
	for (int i = 1; i <= n; i++) {
		count++;
		cout <<"Key " << "[ " << count << " ]: ";
        key();
        cout << endl;
		
	}
}

int main() {
	srand((unsigned)time(NULL));
	generated_keys(input());
}