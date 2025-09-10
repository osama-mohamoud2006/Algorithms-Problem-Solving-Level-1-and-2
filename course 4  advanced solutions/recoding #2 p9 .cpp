#include <iostream>
using namespace std;
/// sum of numbers 
void  input ( int &n1 , int &n2 , int  &n3 ){
  cout<<"enter number: ";
  cin>>n1;
  cout<<"enter number: ";
  cin>>n2;
  cout<<"enter number: ";
  cin>>n3;
}
int sum(int n1  , int n2 , int n3 ){
    return n1  + n2 + n3 ;
}
void print (int total ){
    cout<<"the sum is "<<total<<endl;
}
int main(){
    int n1 , n2 , n3 ;
    input(n1 ,n2 , n3);
    print(sum(n1,n2,n3));
}