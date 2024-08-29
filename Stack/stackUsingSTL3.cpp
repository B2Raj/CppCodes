#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(89);
    st.push(42);
    st.pop();
    cout<<st.top()<<endl;
    st.push(33);
    st.push(32);
    st.push(55);
    cout<<st.top()<<endl;
return 0;
}