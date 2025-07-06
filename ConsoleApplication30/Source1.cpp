#include <iostream>
#include "input_length.h"
using namespace std;

int input_length::get_length(int start, int end) {
    int length;
    do {
        cout << "Enter length: ";
        cin >> length;
        if (length <= 0 || length > 100)
            cout << "Please enter again! " << endl;
    } while (length < start || length > end);
    return length;
}
