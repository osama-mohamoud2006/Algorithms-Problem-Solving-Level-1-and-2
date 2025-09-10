// check if avg>=50 or not
#include <iostream>
using namespace std;
enum check{pass=1 , fail=2 };
void input(int &m1 , int &m2 , int &m3 ){
    cout<<"enter first mark: ";
    cin>>m1;
    cout<<"enter second mark: ";
    cin>> m2;
    cout<<"enter third mark: ";
    cin>>m3;
}
float sum(int m1 ,int m2 , int m3 ){
    return (float) m1 + m2 + m3 ;
}
float avg(int m1 , int m2 , int m3 ){
    return sum(m1,m2,m3) /3 ;
}
check check_avg(int m1 ,int  m2 , int m3){
  if(avg(m1,m2,m3)>=50)
  return pass ;
   else
   return fail ;
}
void print (float avg ){
 if(avg==check::pass)
 cout<<"passed !"<<endl;
   else
   cout<<"you gonna be cooked fr! "<<endl;
}

int main(){
    int m1 =0 , m2 =0 , m3 =0 ;
    input(m1,m2,m3);
    print(check_avg(m1,m2,m3) );
}