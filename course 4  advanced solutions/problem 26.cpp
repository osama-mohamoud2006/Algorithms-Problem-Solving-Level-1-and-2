#include <iostream>
using namespace std;
/// make loop from one to n
int input(){
    int n ;
    cout<<"enter n: ";
    cin>>n;
    return n;
}
 void forloop(int n){
    cout<<"------------------------"<<endl;
    cout<<"for loop "<<endl;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
 }
 void whileloop(int n){
    cout<<"------------------------"<<endl;
    cout<<"while loop "<<endl;
    int i = 1;
    while(n>=i){
        cout<<i<<endl;
        i++;
    }
    
 }
 void dowhileloop(int n ){
    cout<<"------------------------"<<endl;
    cout<<"do while loop "<<endl;
    int i =1;
    do{
        cout<<i<<endl;
        i++;
    } while(i<=n);
 }
 int main(){
    int n = input();
    forloop(n);
    whileloop(n);
    dowhileloop( n );
 }