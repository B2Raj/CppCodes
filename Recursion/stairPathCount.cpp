// if you have no. of stairs and 2 options to climb on stair like at once you can take 1 stair jump or you can take 2 stair jump.
#include<iostream>
using namespace std;
int stair(int n){
    if(n<=2){
        return n;
    }
    else
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ways=stair(n);
    cout<<"Total no. of ways are: "<<ways;
    return 0;
}