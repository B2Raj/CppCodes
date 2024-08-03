#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B:public A{ 
   public:
    B(){
    x=40;
    cout<<x;
    }
};
int main(){
    B obj;
}