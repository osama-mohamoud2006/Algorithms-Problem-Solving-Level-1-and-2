#include <iostream>
using namespace std;
int input() {
	int h;
	do {
cout << "enter the number of hours: ";
cin >> h;
	} while (h <= 0);
	return h;
}

int nofdays(int h){
	float days = h / 24;
	
	return days;
}

int nofweek(int h) {
	return (float) ((h/24) / 7);
}


int main() {
	int h =
	input();
	
	int day = nofdays(h);
	int week = nofweek(h);
	
	cout << "number of days is: " <<float( day) << endl;
	cout << "number of weeks is: " << float( week) << endl;
}