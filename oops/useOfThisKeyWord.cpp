#include<iostream>
using namespace std;
class school{
    private:
    int students;
    int teachers;
    public:
    void setData(){
        cout<<"Students: "<<students<<endl;
        cout<<"Teachers: "<<teachers;
    }
    void getData(int students, int teachers){
       this-> students=students;
       this-> teachers=teachers;
    }
};
int main(){
    school a;
    a.getData(434,53);
    a.setData();
}
// if the name of two variables are same then compiler get confise about them then to make difference between those variables, we use this keyword/operator so that compiler can understand the differences between them.