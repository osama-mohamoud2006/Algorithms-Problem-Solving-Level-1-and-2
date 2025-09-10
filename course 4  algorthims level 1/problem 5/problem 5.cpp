#include <iostream>
using namespace std;
struct stinfo {
	int age;
	bool drive_linece;
	bool has_wastaa;
};
stinfo info() {
	stinfo info;
	cout << "enter age:";
	cin >> info.age;
	cout << "you have drive lincece? ";
	cin >> info.drive_linece;
	cout << "3ndak wastaa yastaa?? ";
	cin >> info.has_wastaa;
	return info;
}
bool confirm(stinfo info) {
	if (info.has_wastaa)
		return true;
	else
		return(info.age > 21 && info.drive_linece );
		 

	
}
void print(stinfo info) {
	if (confirm(info))
		cout << "you 3deet tamm !";
	else
		cout << "go to hell! ";
}
int main() {
	print(info() ) ;
}