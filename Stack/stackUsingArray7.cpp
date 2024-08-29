#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int *arr;
    int capacity; 
    public:
    stack(int c){   //c is the size of stack
        capacity=c;
        top=-1;
        arr=new int(c);
    }
    void push(int value){
        if(top==capacity-1){
            cout<<"Stack is underFlow."<<endl;
            return;
        }
        top++;
        arr[top]=value;
        cout<<arr[top]<<" is pushed."<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the size of stack.";
    cin>>n;
    stack st(n);
}