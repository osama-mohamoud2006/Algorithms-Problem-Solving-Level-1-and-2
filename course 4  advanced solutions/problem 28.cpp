//check if number is odd or not then print sum the odd numbers
#include <iostream>
enum isodd{odd =1 , even =2};
using namespace std;
int input(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    return n;
}
isodd check_odd(int n){
    if(n%2!=0)
    return odd;
    else
    return even;
}
void forloop(int n){
    cout<<"---------------"<<endl;
    cout<<"for loops "<<endl;
    int sum=0;
    
    for(int i =1; i<=n; i++){
        if(check_odd(i)==odd){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}

void whileloop(int n){
    cout<<"-------------"<<endl;
    cout<<"while loop "<<endl;
  int i =0;
  int sum =0;
  while(n>=i){
    if(check_odd(i)==odd){
        sum+=i;
    }
    i++;
  }
  cout<<sum<<endl;
}
void dowhileloop(int n){
    cout<<"-------------"<<endl;
    cout<<"do while loop "<<endl;
    int sum =0;
    int i = 0;
    do{ // n=10
        
        if(check_odd(i)==odd){
            sum+=i;
        }
        i++;
    } while(n>=i);
     cout<<sum<<endl;
}
int main(){
    int n= input();
    forloop(n);
    whileloop(n);
    dowhileloop(n);
}
