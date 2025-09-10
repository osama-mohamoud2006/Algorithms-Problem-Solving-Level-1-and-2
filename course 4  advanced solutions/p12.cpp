// max of 2 numbers
#include <iostream>
using namespace std;
void input(int &n1 , int &n2){
    cout<<"enter number 1: ";
    cin>>n1;
    cout<<"enter number 2: ";
    cin>>n2;
}
int check_number(int n1 , int n2){
    if(n1>n2)
    return n1 ;
     else 
     return n2;
}
void print (int max ){
   cout<<"the max number of 2 values is "<<max<<endl;
}
int main(){
    int n1 =0 , n2 =0 ;
    input(n1 ,n2 );
    print(check_number(n1,n2));

}