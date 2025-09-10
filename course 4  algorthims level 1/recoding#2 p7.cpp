#include <iostream>
#include <string>
using namespace std;
// half of number 
int input(){
    int n;
    cout<<"enter number ";
    cin>>n;
    return n ;
}
float half_number(int n ){
    return (float ) n /2 ;
}

void output(int n ){
    cout<<"the half of "<< to_string(n) << " is "<<half_number(n)<<endl;
}
int main(){
    output(input());
}