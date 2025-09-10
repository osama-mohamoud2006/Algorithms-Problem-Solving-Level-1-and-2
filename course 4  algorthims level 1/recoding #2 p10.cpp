#include <iostream>
using namespace std;
// take 3 marks make the sum of them and make avg
void input(int &m1, int &m2, int &m3) {
    cout << "enter mark1: ";
    cin >> m1;
    cout << "enter mark 2: ";
    cin >> m2;
    cout << "enter mark 3: ";
    cin >> m3;
}
int sum(int m1 , int m2 , int m3 ){
    return m1 + m2 + m3 ;
}
int avg(int m1 , int m2 , int m3 ){
  return (m1 + m2 + m3 ) / 3;
}
void print(int m1 , int m2 ,  int  m3 ){
    cout<<"the avg is: "<< avg(m1,m2,m3) <<endl;
}
int main(){
    int m1=0 , m2=0, m3;
    input(m1, m2, m3);
    print(m1, m2, m3);
}