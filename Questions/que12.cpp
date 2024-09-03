#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int x) {
    int count = 0; // Initialize the count to 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            count++; // Increment count if element matches 'x'
    }
    return count;
}
int main() {
    int arr[] = {2, 4, 2, 1, 2, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2; // Element to count occurrences for
    int result = countOccurrences(arr, n, x);
    cout << "Number of occurrences of " << x << " in the array: " << result << endl;
    return 0;
}