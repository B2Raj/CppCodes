#include<iostream>
#include<stack>
#include<string>
using namespace std;
// function to add two large numbers represented as string
string addLargeNumbers(string num1, string num2){
    stack<int> stack1, stack2, resultStack;
    string result=" ";
    // push digits of num1 onto stack1
    for (char digit : num1)
    stack1.push(digit-'0');
    // push digits of num onto stack2
    for (char digit : num2)
    stack2.push(digit-'0');
    int carry=0;
    // perform addition
   while(!stack1.empty() || !stack2.empty()|| carry!=0){
    int sum=carry;
    if(!stack1.empty()){
        sum+=stack1.top();
        stack1.pop();
    }
    if(!stack2.empty()){
        sum+=stack2.top();
        stack2.pop();
    }
    resultStack.push(sum%10);
    carry=sum/10;
    }
    // convert resultStack to string
    while(!resultStack.empty()){
        result+=to_string(resultStack.top());
        resultStack.pop();
    }
    return result;
}
int main(){
    string num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    string sum=addLargeNumbers(num1,num2);
    cout<<"The sum of the two large numbers is: ";
    cout<<sum<<endl;
return 0;
}