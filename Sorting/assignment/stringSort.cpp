/* Given an array of string arr[] with all string in lowercase. Sort given strings using Bubble Sort and display the sorted array. */
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. for size of characters: ";
    cin>>n;
    string str[n];
    // for taking input of names by user
    cout<<"Enter your names: "<<endl;
    for (int i=0; i<n; i++){
        cin>>str[i];
    }
    // for displaying the names 
    for (int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }
    for (int i=0; i<n-1; i++){// no. of passes
        for (int j=0; j<n-1; j++){ //for traversing
            if(str[j]>str[j+1]){
                string temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    // for displaying the sorted names
    cout<<"Sorted names is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }
    return 0;
}