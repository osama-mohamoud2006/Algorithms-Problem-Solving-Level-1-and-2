#include <iostream>
using namespace std;

struct var {
    int from;
    int to;
    int age;
};

enum yes_no { yes = 1, no = 2 };

var input() {
    var input;
    cout << "Enter the start number: ";
    cin >> input.from;
    cout << "Enter to number: ";
    cin >> input.to;
   
    return input;
}

int age(var& input) { // Pass by reference to modify the original 'input'
    cout << "Enter your age: ";
    cin >> input.age;
    return input.age;
}

yes_no from_to_number(const var& input) { // Use const reference to avoid unnecessary copying
    if (input.age >= input.from && input.age <= input.to) // Check if age is in range
        return yes;
    else
        return no;
}

void loop(var& input) { // Modify 'loop' to return void and update 'input' directly
    input.age = 0;
    do {
        age(input);
    } while (from_to_number(input) != yes);
}

void print(const var& input) { // Use const reference for 'print'
    if (from_to_number(input) == yes) {
        cout << "Approved \"age\"" << endl;
    }
    else {
        cout << "Not approved \"age!\"" << endl;
    }
}

int main() {
    var input = ::input(); // Initialize 'input' by calling the 'input' function
    loop(input);           // Update 'input' using the 'loop' function
    print(input);          // Pass the updated 'input' to the 'print' function
}
