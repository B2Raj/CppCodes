#include<iostream>
using namespace std;
class vehicle{
    public:
    int four_wheeler;
    int two_wheeler;

};
int main(){
    vehicle car,bike;
    car.four_wheeler=534343;
    bike.two_wheeler=983724;
    cout<<"Four Wheeler: "<<car.four_wheeler<<endl;
    cout<<"Two Wheeler: "<<bike.two_wheeler<<endl;
}