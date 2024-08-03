#include<iostream>
using namespace std;
class A{
    private:
    int n;
    float m;
    int x;
    int y;
    public:
    A(){    // destructor
        cout<<"Constructor is called."<<endl;
    }
    ~A(){ // destructor
        cout<<"Destructor is called. "<<endl;
    }
    void input(){
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter m: ";
        cin>>m;
    }
    void display(){
        cout<<"n is: "<<n<<endl;
        cout<<"m is: "<<m<<endl;
    }
    void show_x(int p){
        x=p;
    }
    void show_y(int q){
        y=q;
    }
    void display_x_y(){
        cout<<"x is: "<<x<<endl;
        cout<<"y is: "<<y<<endl;
    }
};
int main(){
    A a;
    a.show_x(34);
    a.show_y(53);
    a.display_x_y();
    cout<<"------input--------"<<endl;
    a.input();
    cout<<"----------Output---------"<<endl;
    a.display();
}