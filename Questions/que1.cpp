#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int x){
    if (right >= left) {
        int mid = left + (right - left) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;
        // If the element is smaller than mid, search in the left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        // Otherwise, search in the right subarray
        return binarySearch(arr, mid + 1, right, x);
    }
    // Element not found
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    cout<<"Given array is: ";
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x = 10;
    cout<<"Find the indes of element "<<x<<" "<<endl;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "Element "<<x<<" is not present in the array";
    else
        cout << "Element is present at index " << result;

    return 0;
}