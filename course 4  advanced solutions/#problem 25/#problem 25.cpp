#include <iostream>
using namespace std;
int input() {
	int age;
	cout << "enter age: ";
	cin >> age;
	return age;
}
bool range(int from ,int age, int to) {
	return (age >= from && to  >= age);
}

int loop(int from ,int to) {
	int age = 0;
	do {
		age = input(); // this test for theme
	} while (!range(from, age, to)); // condition for rpeation
	return age;
}
void print(int age) {
	cout << "the age in the range " << age<<endl;
}

int main() {
	int age = 0;
	print(loop(18,45));
}