#include<iostream>
using namespace std;
class factorial{
    private:
    int n;
    public:
       // constructor, will automatically called
    factorial(){ 
        cout<<"Enter a number: ";
        cin>>n;
        int fact=1;
        for (int i=1; i<=n; i++){
            fact*=i;
        }
        cout<<fact;
    }
};
int main(){
    factorial a;
return 0;
}