#include<iostream>
using namespace std;
class test{
    int students;
    int marks;
    float n;
    public:
    test(){ // default constructor
        //  By this we can say that constructor is called
        cout<<"Constructor is called: "<<endl;
    }
    void showTest(){
        cout<<"No. of students: ";
        cin>>students;
        cout<<"Sum of their marks is: ";
        cin>>marks;
    }
    void display(){
        cout<<"Total students are: "<<students<<endl;
        cout<<"Sum of their marks is: "<<marks<<endl;
    }
};
int main(){
    test a;
    a.showTest();
    cout<<"-------Required data's are:--------"<<endl;
    a.display();
 return 0;
}