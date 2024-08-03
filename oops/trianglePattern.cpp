#include<iostream>
using namespace std;
class Pattern{
    private:
    int n;
    public:
    void pattern(){
        cout<<"Enter a number: ";
        cin>>n;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n+1-i; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Pattern straightTriangle, inverseTriangle;
    straightTriangle.pattern();
    cout<<endl;
    inverseTriangle.pattern();
return 0;
}