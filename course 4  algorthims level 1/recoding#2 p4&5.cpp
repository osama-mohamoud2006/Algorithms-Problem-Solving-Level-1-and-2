#include<iostream>
using namespace std;
struct stinfo{
    int age;
    bool driver_license;
    bool wasta;
};
stinfo input(){
    stinfo input;
    cout<<"enter your age: "<<endl;
    cin>>input.age;
    cout<<"tell me if you have driver licences or not: ";
    cin>>input.driver_license;
    cout<<"3ndak wastaa?? ";
     cin>>input.wasta; 
    return input;
}
bool check (stinfo info){
    if (info.wasta)
    return true;

     else 
    return (info.age>=21 && info.driver_license == 1 );
}
 void print (stinfo info ){
    if(check (info)){
        cout<<"--------------------"<<endl;
        cout<<"Hired!"<<endl;
        cout<< "\n etfdal yaa mohtram"<<endl;
    }
   
      else{
         cout<<"go to hell ! "<<endl;
      }
     
 }

 int main(){
    print ( input() );
 }