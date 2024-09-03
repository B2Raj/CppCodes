#include<iostream>
using namespace std;
#define n 20
class queue{
    int *arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void enQueue(int data){
        if(back==n-1){
            cout<<"Queue overFlow."<<endl;
            return;
        }
        back++;
        arr[back]=data;
        cout<<arr[back]<<" is Enqued."<<endl;
        if(front==-1){
            front++;
        }
    }
    void deQueue(){
        if(front==-1 || front>back){
            cout<<"No elements in Queue."<<endl;
            return;
        }
        front++;
        cout<<arr[front-1]<<" is dequed."<<endl;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No elements in Queue."<<endl;
            return INT16_MIN;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.deQueue();
    cout<<q.empty()<<endl;
    q.enQueue(42);
    q.enQueue(44);
    q.enQueue(55);
    q.enQueue(22);
    q.enQueue(54);
    q.deQueue();
    q.enQueue(76);
    q.deQueue();
    cout<<q.peek()<<endl;
    q.enQueue(32);
    cout<<q.peek()<<endl;
    q.enQueue(98);
    q.deQueue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
return 0;
}