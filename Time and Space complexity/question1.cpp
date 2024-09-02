//Note:- If in any loops or nested loops, there is independent variables on each other then their time and space complexity will be their product.Like, in above code there is nested loop where 'i' and 'j' is independent of each other, so their time and space complexity will be the product of their total iteration times that means i is iterated upto n and j is iterated upto m, so, their time and space complexity will be "n*m" or O(mn), where O is Big-oh.
#include<iostream>
using namespace std;
int main(){
    int n=2,m=3;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Here, its time and space complexity will be n*m, because, first loop is traversing n-times and second loop is traversing though m-times.So, time complexity will be O(mn),where 'O' is Big-oh.
