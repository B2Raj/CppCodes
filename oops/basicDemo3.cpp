#include<iostream>
using namespace std;
class car{ // car is class
   private:
   int cng=37438;   //properties
   int diseal=34839;
   public:
   int show_diseal(){
    return diseal;
   }
   int show_cng(){
    return cng;
   }
   int electric=5802;   //properties
   int petrol=4348;
};
int main(){
    car _auto,bike,truck; // objects
    _auto.show_cng();
    truck.show_diseal();
    cout<<"CNG(Auto): "<<_auto.show_cng()<<endl;
    cout<<"Diseal(Truck): "<<truck.show_diseal()<<endl;
    cout<<"Petrol(Bike): "<<bike.electric<<endl;
}
