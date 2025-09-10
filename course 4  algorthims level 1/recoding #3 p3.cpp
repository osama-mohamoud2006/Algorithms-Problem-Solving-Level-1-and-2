// check if number is even or odd
#include <iostream>
using namespace std;
enum entype {even=1 , odd =2 };

int input(){// function for input number 
    cout<<"enter number: "; 
    int n ;
    cin>>n;
    return n ;
}
entype checknumber(int n ){ //enum function to check if the value is even or odd , n parameter 
    int rem = n %2 ;
    if(rem==0)
    return even;
    else
    return odd ;

}
void print(entype checknumber ){ // print fun i used enum as parameter bcz i make if operation on it 
    if( checknumber == even)
    cout<<"it is even number "<<endl;
    else 
    cout<<"it is odd number "<<endl;
}
int main(){
    print (  checknumber( input() )   );
}