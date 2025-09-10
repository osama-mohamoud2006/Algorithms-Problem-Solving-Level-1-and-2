#include <iostream>
using namespace std;
int input() {
	float total;
	cout << "enter total sales: ";
	cin >> total;
	return total;
}
float commisionperc(int total) {
	if (1000000 >= total)
		return 1 / 100;
	else if (500000 >= total)
		return 2 / 100;
	else if (total >= 100000)
		return 0.03;  
	else if (total >= 50000)
		return 0.05;  
	else
		return 0.00;
}
float CalculateTotalCommission(float total)
{
	return commisionperc(total) * total;  // Multiply sales by commission percentage.
}
int main() {
	float total = 0;
	cout << "the percentage is " << commisionperc(total) << endl;
	cout << "total " << CalculateTotalCommission(total) << endl;
}