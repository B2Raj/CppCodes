#include<iostream>
using namespace std;
class xyz{
    int n;
    int m;
    public:
    // also constructor is used to allocate the memory
    xyz(){ // default constructor
        cout<<"Constructor is called: "<<endl;
    }
    xyz(int num1, int num2){// parametrised constructor
        n=num1;
        m=num2;
    }
    void display(){
        cout<<"m is: "<<n<<endl;
        cout<<"n is: "<<m<<endl;
    }
};
int main(){
    xyz a(34,76);
    a.display();
}