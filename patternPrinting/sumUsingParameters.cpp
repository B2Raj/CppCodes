#include<iostream>
using namespace std;
class sum{
    public:
    void add(int a, int b){
        cout<<"Sum of the numbers is: "<<a+b;
    }
};
int main(){
    sum A;
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    A.add(a,b);
return 0;
}