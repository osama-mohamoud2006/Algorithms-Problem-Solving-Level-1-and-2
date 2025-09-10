/// print from n to 1
#include <iostream>
using namespace std;

int input(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    return n;
}
void forloop(int n){

    cout<<"foo loop "<<endl;
    for(int i =n; i>=1; i-- ){
        cout<<i<<endl;
    }
}
void whileloop(int n){
    cout<<"----------------------------"<<endl;
    cout<<"while loop "<<endl;
    int  i = n;
    while(1<=i){
       cout<<i<<endl;
       i--;
         
    }
      
    
}
void dowhileloop(int n ){
    cout<<"----------------------------"<<endl;
    cout<<"do while loop "<<endl;
    int i =n+1;
    do{
     i--;
     cout<<i<<endl;
    }while(i>=1);
}
int main(){
    int n = input();
    forloop(n);
    whileloop(n);
    dowhileloop(n);
}