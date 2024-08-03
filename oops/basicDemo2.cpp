#include<iostream>
using namespace std;
class school{
        public:
    string teachers;
    int office;
    int classRooms;
};
int main(){
    school h2;
    h2.classRooms=54;
    h2.teachers="Ram, Priti, Dixit.";
    h2.office=5;
    cout<<h2.classRooms<<endl;
    cout<<h2.teachers<<endl;
    cout<<h2.office<<endl;
 return 0;
}