#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    void sum(){
        cout<<"Enter 1st no.: ";
        cin>>a;
        cout<<"Enter 2nd no.: ";
        cin>>b;
        cout<<"Sum is: "<<a+b;
    }
};
int main(){
    add a,b;
    a.sum();
    cout<<endl;
    b.sum();
return 0;
}