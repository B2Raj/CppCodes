#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i; // Element found at index i
    }
    return -1; // Element not found
}
int main() {
    int arr[] = {2, 4, 0, 1, 9}; // Example array
    int x = 1; // Element to be searched
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;
    return 0;
}
