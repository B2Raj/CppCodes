#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    // Base case: If the array is empty, return -1
    if (n == 0)
        return -1;
    // Check if the first element matches the target value
    if (arr[0] == x)
        return 0;
    // Recursive case: Search in the remaining part of the array
    int result = linearSearch(arr + 1, n - 1, x);
    // If found, adjust the index
    if (result != -1)
        return result + 1;
    // Element not found
    return -1;
}
int main() {
    int arr[] = {2, 4, 1, 10, 9}; // Example array
    int x = 1; // Element to be searched
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;
    return 0;
}
