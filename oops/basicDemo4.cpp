#include<iostream>
using namespace std;
class student{
    private:
    char name[8];
    int roll_no;
    public:
    void showInput(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Roll No.: ";
        cin>>roll_no;
    }
    void showOutput(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your roll no. is: "<<roll_no;
    }
};
int main(){
    student a;
    a.showInput();
    a.showOutput();
}