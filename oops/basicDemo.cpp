   // By default, classes are private, so, to get access of those class we will have to make it public.
#include<iostream>
using namespace std;
    class school {
        public:
        int classRooms;
        int office;
        string teachersName;
        void main(){
            cout<<teachersName<<endl;
        }
    };
    int main(){
        school h1;
       h1.classRooms=23;
       h1.teachersName="Ramesh, Suresh, Radha.";
       h1.office=3;
       cout<<"Class Rooms: "<<h1.classRooms<<endl;
       cout<<"Teachers Name: "<<h1.teachersName<<endl;
       cout<<"Total Office: "<<h1.office<<endl;
    return 0;
}
