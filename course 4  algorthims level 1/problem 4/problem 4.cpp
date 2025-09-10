#include <iostream>
using namespace std;
struct stinfo {
	int age;
	string is_hired;
};
stinfo input() {
	stinfo info; 
	cout << "enter your age: ";
	cin >> info.age;
	cout << "has driver's linece?? ";
	cin >> info.age;
	return info;
}
bool is_hired( stinfo info ) {
	return (info.age > 21 && info.is_hired=="true"||"yes" );
}
void output(stinfo info ) {
	if (is_hired(info))
		cout << "\"hired\" ";
	else
		cout<< "go to hell ";

}
int main() {
	output(input());
}