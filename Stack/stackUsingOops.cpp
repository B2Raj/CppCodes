#include<iostream>
using namespace std;
class stack{
    private:
    int arr[7];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(int a){
        if(top==7-1){
            cout<<"OverFlow."<<endl;
        }
        else
        arr[top++]=a;
    }
    int pop(){
        if(top==-1){
            cout<<"UnderFlow."<<endl;
        }
        else
        return arr[top--];
    }
};
int main(){
    stack s;
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(1); 
    s.push(10);
    s.push(11);
    s.push(33);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
return 0;
}