#include<iostream>
using namespace std;
float area(float x){
    float a=3.14*x*x;
    return a;
}
float circumference(float y){
    float c=2*3.24*y;
    return c;      
}
int main (){
    float r; // r is radius
    cout<<"Enter radius: ";
    cin>>r;
    area(r);
    circumference(r);
    cout<<"Radius of circle is: ";
    cout<<area(r)<<endl;
    cout<<"Circumference of circle is: ";
    cout<<circumference(r);
 return 0;   
}