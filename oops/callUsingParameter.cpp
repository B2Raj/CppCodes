#include<iostream>
using namespace std;
class Car{
    private:
    string carName;
    string carModel;
    int topSpeed;
    int year;
    public:
    void getInfo(string name,string model,int speed,int _year){
       carName=name;
       carModel=model;
       topSpeed=speed;
       year=_year;
    }
    void data(){
        cout<<"Name of car is: "<<carName<<endl;
        cout<<"Model of car is: "<<carModel<<endl;
       cout<<"Top speed of car is: "<<topSpeed<<endl;
       cout<<"Year of car is: "<<year<<endl;
    }
};
int main(){
    Car tata, toyota;
    tata.getInfo("BMW", "nexon", 240, 2019);
    tata.data();
    toyota.getInfo("Toyota", "suzu",150, 2021);
    toyota.data();
return 0;
}