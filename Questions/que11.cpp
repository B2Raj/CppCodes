#include <iostream>
using namespace std;
void segregateZeroesAndOnes(int arr[], int n) {
    int left = 0; // Pointer for 0s
    int right = n - 1; // Pointer for 1s
    while (left < right) {
        while (arr[left] == 0 && left < right)
            left++; // Move left pointer to the right while encountering 0s
        while (arr[right] == 1 && left < right)
            right--; // Move right pointer to the left while encountering 1s
        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}
int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregateZeroesAndOnes(arr, n);
    cout << "Array after segregation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
