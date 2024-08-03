#include<iostream>
using namespace std;
class vehicle{
    public:
    int fourWheeler;
    int twoWheeler;
    void first(){
        cout<<"Total 4-wheeler are: ";
        cout<<fourWheeler<<endl;
    } 
    void second(){
        cout<<"Total 2-wheeler are: ";
        cout<<twoWheeler<<endl;
    }
};
int main(){
    vehicle a,b;
    // for initialising the variables
    a.fourWheeler=45;
    b.twoWheeler=78;
    // by calling
    a.first();
    b.second();
    // without calling
    cout<<a.fourWheeler<<endl;
    cout<<b.twoWheeler<<endl;
return 0;
}