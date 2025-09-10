// rectangle area
#include <iostream>
using namespace std;
void input(float &l , float &w){
    cout<<"enter width: ";
    cin>>w;
    cout<<"enter length: ";
    cin>>l;

}
float area(float l , float  w){
    return l*w;
}
void print(float area){
    cout<<"the area of rectangle is "<<area<<endl;
}

int main(){
    float l =0 , w =0 ;
    input(l,w);
    print(area(l,w));
}