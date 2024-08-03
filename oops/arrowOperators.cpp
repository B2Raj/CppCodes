#include<iostream>
using namespace std;
class school{
    private:
    int students;
    int teachers;
    public:
    void setData(){
        cout<<"Students: "<<students<<endl;
        cout<<"Teachers: "<<teachers<<endl;
    }
    void getData(int x, int y){
        students=x;
        teachers=y;
    }
};
int main(){  
    school *ptr=new school;
    ptr->getData(344,74);
    ptr->setData();
return 0;   
}