// It is nothing but same as constructor but execute when the objects finishes their task. It is also a function but special member function as constructor.
#include<iostream>
using namespace std;
class employee{
    private:
    int leave, basicSalary, requiredDay, oneDaySalary, requiredSalary;
    public:
    employee(){ // constructor
        cout<<"About Salary: "<<endl;
    }
    ~employee(){    // destructor
        cout<<"Thanks...... \n";
    }
    void display(){     // function for taking input
        cout<<"Enter your Basic_Salary: ";
        cin>>basicSalary;
        cout<<"Enter total no. of leave: ";
        cin>>leave;
    }
    void _display(){    //function for display output
        oneDaySalary=basicSalary/30;
        requiredDay=30-leave;
        requiredSalary=requiredDay*oneDaySalary;
        cout<<"Required salary of this month is: "<<requiredSalary<<" INR"<<endl;
    }
};
int main(){
    employee bittu; // object
    bittu.display(); 
    bittu._display();
return 0;
}