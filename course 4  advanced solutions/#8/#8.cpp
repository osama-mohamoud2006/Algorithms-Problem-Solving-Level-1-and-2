// read mark and tell me if he passed or not
#include <iostream>
using namespace std; 
enum passordie{pass=1 , fail=2 };
int read(int &mark) {
	
	cout << "enter your mark bitch: ";
	cin >> mark;
	return mark;
}
passordie check_this_bitch(int &mark) {
	
	if (mark >= 50)
		return passordie::pass;
	else
		return fail; 
}
void fuckin_output(int mark) {
	if (check_this_bitch(mark) == passordie::pass)
		cout << "passed ^_^" << endl;
	else
		cout << "go die please " << endl;
}
int main() {
	int mark = 0;
	fuckin_output(read(mark) );
}