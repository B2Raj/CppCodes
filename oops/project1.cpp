/*Write a class player that contains attributes for the player name, age, team name.
Write three member function input data, change data, and display data these attributes.
Write a constructor that ask for input to initialize all the attribute.*/
#include<iostream>
using namespace std;
class Player{
    int age;
    string team;
    string name;
    public:
    Player(){   // constructor
        cout<<"Enter name of player: ";
        getline(cin,name);
        cout<<"Enter name of team: ";
        getline(cin,team);
        cout<<"Enter age of player: ";
        cin>>age;
    }
    void playerOutput(){
        cout<<"Name of Player is: "<<name<<endl;
        cout<<"Age of Player is: "<<age<<endl;
        cout<<"Team of Player is: "<<team<<endl;
    }
};
int main(){
    Player a;
    a.playerOutput();
}