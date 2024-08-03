#include<iostream>
using namespace std;
class family{
    int childrens=4;
    int women=2;
    int men=5;
    public:
    void show_women(){
        cout<<"Total womens: "<<women<<endl;
    }
    void show_men(){
        cout<<"Total men: "<<men<<endl;
    }
    void show_children(){
        cout<<"Totla childrens: "<<childrens<<endl;
    }
};
int main(){
    family members;
    members.show_men();
    members.show_women();
    members.show_children();
}