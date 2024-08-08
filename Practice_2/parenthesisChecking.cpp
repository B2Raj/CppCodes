#include<iostream>
#include<stack>
using namespace std;
bool areParenthesesBalanced(string expr){
    stack<char> s;
    char x;
    // for traversing the expression
    for (int i=0; i<expr.length(); i++){
        if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{'){
            // push the element in the stack
            s.push(expr[i]);
            continue;
        }
    // if current character is not openint parenthesis, then it must be closing. 
    // So, stack cannot be empty at this point.
    if(s.empty())
        return false;
    switch (expr[i]){
            case ')':
            x=s.top();
            s.pop();
            if(x=='{' || x=='[')
            return false;
        break;
            case '}':
            x=s.top();
            s.pop();
            if(x=='(' || x=='[')
            return false;
        break;
            case ']':
            x=s.top();
            s.pop();
            if(x==']' || x=='{')
            return false;
        break; 
        }
    }
    // check empty stack
    return (s.empty());
}
int main(){
    string expr;
    cout<<"Enter your Expression using Parenthesis to check: ";
    cin>>expr;
    if(areParenthesesBalanced(expr))
        cout<<"Equation is Balanced";
    else   
        cout<<"Equation not Balanced: ";
    return 0; }