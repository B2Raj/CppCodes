#include<iostream>
using namespace std;
string print(string name){
    string x="Welcome "+name;
    return x;
}
int main(){
    string str="Bittu";
    print("Bittu");
    cout<<print("Bittu !");
 return 0;
}