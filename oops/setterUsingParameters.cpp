#include<iostream>
using namespace std;
class book{
    int page;
    float price;
    public:
    void setPage(int p){
        page=p;
    }
    void setPrice(float _p){
        price=_p;
    }
    void setOutput(){  
        cout<<"Total page is: "<<page<<endl;
        cout<<"Total price is: "<<price<<endl;
    }

};
int main(){
    book a;
    a.setPage(3432);
    a.setPrice(232.423);
    a.setOutput();
 return 0;
}