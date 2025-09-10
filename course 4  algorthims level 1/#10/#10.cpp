#include<iostream>
using namespace std;
void read(int& m1, int& m2, int& m3) {
	cout << "enter number 1: ";
	cin >> m1;
	cout << "enter number 2: ";
	cin >> m2;
	cout << "enter number 3: ";
	cin >> m3;
	
}
int sum(int m1, int m2, int m3) {
	return m1 + m2 + m3;
}
int CalculateAverage(int m1, int m2, int m3) {
	return (float)sum(m1, m2, m3) / 3;
}
void PrintResults(int m1, int m2, int m3) {
	cout << "The Avg is: " << CalculateAverage(m1, m2, m3) << endl;
}

int main() {
	int  m1 = 0;
	int  m2 = 0;
		int m3 = 0;
		read(m1, m2, m3);
		cout << sum(m1, m2, m3) << endl;
		PrintResults(m1, m2, m3);

}