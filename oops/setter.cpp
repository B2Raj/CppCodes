#include<iostream>
using namespace std;
class book{
    int pages;
    char name[20]; // for author name
    float price;
    public:
    void setInput(){
        cout<<"Enter Pages: ";
        cin>>pages;
        cout<<"Enter name of Author: ";
        cin>>name;
        cout<<"Enter the Price: ";
        cin>>price;
    }
    void setOutput(){
        cout<<"Total pages is: "<<pages<<endl;
        cout<<"Name of Author is: "<<name<<endl;
        cout<<"Total price of Book is: "<<price<<endl;
    }
};
int main(){
    book a,b;
    // for input of data in book1 and book2
    cout<<"---------Input data of Book1----------"<<endl;
    a.setInput();
    cout<<"---------Input of data of Book2----------"<<endl;
    b.setInput();
    // for output of details of book1 and book2
    cout<<"------Details of Book1-------"<<endl;
    a.setOutput();
    cout<<"---------Details of book2----------"<<endl;
    b.setOutput();
 return 0;
    
}