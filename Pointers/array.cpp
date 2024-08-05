#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={2,5,3,5};
    cout<<sizeof(arr)<<endl;
   cout<<"address of 1st block of array is:"<<arr<<"\n";
   // in an array, the address of 1st block is the name of that array like if the name of an array is "array1", then for the address of 1st block of that array will be the "array1".
   cout<<"Adress of 1st block of arr: "<<&arr[0]<<endl;
   // In other way, to find any other block address of an array, we can use index for that particular block of array with "&".
   cout<<*arr<<endl;
   cout<<*arr+1<<endl;  
   cout<<*arr+5<<endl;
   int i=3;
   cout<<arr[i]<<endl;// this arr[i] means *(arr+i);
   cout<<i[arr]<<endl;// this arr[i]alsomeans *(arr+i);
   int *ptr=&arr[2];
  cout<<ptr<<endl;//gives address cause there is no star
   cout<<*ptr<<endl;// gives value cause of '*'
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
   cout<<sqrt(16)<<endl;
}