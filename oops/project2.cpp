#include<iostream>
#include<string>
using namespace std;
class admissionForm{
    private:
    // These are the properties of class that is admissionForm
    char name[10]; 
    char city[34];
    int age;
    string nationality;
    public:
    admissionForm(){    // constructor
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your city name: ";
        cin>>city;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void showData(){       // function for access the private data
        cout<<"Name: "<<name<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    cout<<"----input Data-----"<<endl;
    admissionForm Bittu, Vicky; // objects
    cout<<"-----output Data-----"<<endl;
    Bittu.showData(); // for call this function
    Vicky.showData(); // for call this function
return (0);
}