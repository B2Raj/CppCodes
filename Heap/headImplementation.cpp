#include<iostream>
using namespace std;
class maxHeap{
    int *arr;
    int size;   // total elements of array
    int totalSize;  // total size of array
    public:
    maxHeap(int n){
        arr=new int[n];
        size=0;
        totalSize=n;
    }
    // insertion in heap

    void insert(int value){
        // if heap size is available or not
        if(size==totalSize){
            cout<<"Heap overFlow \n";
            return;
        }
        arr[size]=value;
        int index=size;
        size++;
        // compare with its parent
        while(index>0 && arr[(index-1)/2]/arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index=(index-1)/2;
        };
        cout<<arr[index]<<" is inserted into the heap.\n";
    }
    void print(){
        for (int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    maxHeap h1(6);
    h1.insert(4);
    h1.insert(14);
    h1.insert(11);
    h1.insert(114);
    h1.insert(24);
    h1.insert(1);
    // h1.insert();
    // h1.insert(2);
    h1.print();
return 0;
}