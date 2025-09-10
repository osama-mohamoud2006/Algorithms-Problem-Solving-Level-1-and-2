// max of 3 numbers
#include <iostream>
#include <string>
using namespace std;
void input(int &n1 , int &n2 , int &n3 ){
    cout<<"enter n1: ";
    cin>>n1;
    cout<<"enter n2: ";
    cin>>n2;
    cout<<"enter n3: ";
    cin>>n3;
}
int check_max(int n1 ,int n2 , int n3){
    if(n1>n2 ){

       if(n1>n3)
        return n1;
       
       else
        return n3;
       
    }

    else{ // n2>n1
     if(n2>n3)
     return n2;
     else 
     return n3;

    }
        
    
}
 void print(int max){
    cout<<max<<" is the max number "<<endl;
 }

 int main(){
    int n1=0 , n2=0 , n3=0 ;
    input(n1,n2,n3);
    print( check_max(n1,n2,n3) ); 
 }