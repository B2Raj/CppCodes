#include<iostream>
using namespace std; 
class test{
    private:
    string student_name;
    int Roll_no;
    public:
    test(){
        cout<<"Constructor is Called."<<endl;
        cout<<6<<endl;
    }
    void xyz();
    void disp();
};
void test::xyz(){
    cout<<"NAME"<<endl;
    cin>>student_name;
    cout<<"roll no: "<<endl;
    cin>>Roll_no;
}
void test::disp(){
    cout<<"Name: " << student_name<<endl;
    cout<<"roll no: " << Roll_no<<endl;
}
int main(){
    test a;
    a.xyz();
    a.disp();



}