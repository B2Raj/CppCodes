#include<iostream>
using namespace std;
class Stack{
    private:
    int *arr[6];
    int top;
    public:
    Stack(){
    top=-1; 
    }
    void push(int element){
        if(top==5){
            cout<<"OverFlow."<<endl;
        }
        else 
            arr[top++]=element; 
    }
};
int main(){
    
}