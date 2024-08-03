#include<iostream>
using namespace std;
class book{
         private:
    int page;
    float price;
         public:
    void setPage(int p){
        page=p;
    }
    void setPrice(int _p){
        price=_p;
    }
    int getPage(){
        return page;
    }
    float getPrice(){
        return price;
    }
};
int main(){
    book a,b;
            //book 1
    cout<<"--------Book_1 data and output: --------"<<endl;
    a.setPage(793);
    a.setPrice(239.17);
    cout<<"Total pages are: "<<a.getPage()<<endl;
    cout<<"Total price is: "<<a.getPrice()<<endl;
            //bool2
    cout<<"------Book_2 data and output: --------"<<endl;
    b.setPage(478);
    b.setPrice(73.78);
    cout<<"Total pages are: "<<b.getPage()<<endl;
    cout<<"Total price is: "<<b.getPrice()<<endl;
 return 0;
}