// swap 2 numbers
#include <iostream>
using namespace std;
void input(int &n1 , int &n2){
    cout<<"enter number 1 ";
    cin>>n1;
    cout<<"enter number 2 ";
    cin>>n2;
}
void swap(int &n1 , int &n2 ){
    int temp;
    temp = n1 ; // saved the old n1 value 
    n1 = n2 ; // b=a     1-2 ,,,, 2-1
    n2 = temp ;
}
void print(int n1 , int n2){
    cout<< "number 1 after swap is "<<n1<<endl;
    cout<< "number 2 after swap is "<<n2<<endl;
}
int main(){
    int n1=0; 
    int n2=0 ;
    input(n1 ,n2);
    swap(n1 ,n2);
    print(n1 , n2 );
}