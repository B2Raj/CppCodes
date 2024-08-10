#include<iostream>
using namespace std;
void printReverse(string &s, int index){
    if(index<0){
        return;
    }
    else
        cout<<s[index];
        printReverse(s, index-1);
}
int main(){
    string s;
    cout<<"Enter your characters: ";
    cin>>s;
    int length=s.length();
    printReverse(s, length-1);
    return 0;
}