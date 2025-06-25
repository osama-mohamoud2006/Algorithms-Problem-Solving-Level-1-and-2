#include <iostream>   
#include <string>    
using namespace std;  


int ReadPositiveNumber(string message)
{
    int Number = 0; // Initialize a variable to store the user's input.
    do
    {
        cout << message << endl; // Display the prompt message.
        cin >> Number;           // Read the user's input.
    } while (Number <= 0);       // Continue looping until a positive number is entered.

    return Number;             // Return the validated positive number.
}

// perfect square is all numbers that can be divisable by number and the sum of them  are equal to number 
bool  check(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        // 6
        //10 
        if (n % i == 0)  sum  += i ;
    }
    return sum == n;
}
void print(int n) {
    cout << "perfect nums are : " << endl;
    for (int i = 1; i < n; i++) {
        if (check(i)) cout << i << endl;
    }
}
int main() {
    print(ReadPositiveNumber("enter: "));
}