// One point that must be noted that data are stored in private.
#include<iostream>
using namespace std;
class book{
    int page;
    char authorName[45];
    float price;
    public:
    void showInputHeading(){
        cout<<"-------Input Data-------"<<endl;
    }
    void setPage(){
        cout<<"Enter pages: ";
        cin>>page;
    }
    void setAuthorName(){
        cout<<"Author's name is: ";
        cin>>authorName;
    }
    void setPrice(){
        cout<<"Price of Book is: ";
        cin>>price;
    }
    void showOutputData(){
        cout<<"--------Output Data-------"<<endl;
    }
    void showOutput(){
        cout<<"Total pages are: "<<page<<endl;
       cout<<"Name of Author is: "<<authorName<<endl;
       cout<<"Price of Book is: "<<price<<endl;
    }
};
int main(){
    book a;
    a.showInputHeading();
    a.setPage();
    a.setAuthorName();
    a.setPrice();
    a.showOutputData();
    a.showOutput();
return 0;
}