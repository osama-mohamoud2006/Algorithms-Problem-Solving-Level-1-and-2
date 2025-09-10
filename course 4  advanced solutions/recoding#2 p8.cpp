#include <iostream>
using namespace std;
// read mark and decide he passed or not
enum encheck{pass=1 , fail =2 };

int input(){
    int m ;
    cout<<"enter your mark: ";
    cin>>m;
    return m ; 
}

encheck check_grade(int m ){
    if( m >= 50)
    return pass ;
     else
     return encheck::fail ;
}
void print( int m ){
  if(check_grade(m) == encheck::pass)
  cout<<"you passed "<<endl;
    else 
    cout<<"you failed! "<<endl;
}

int main(){
   print(  input()  ); 
}
