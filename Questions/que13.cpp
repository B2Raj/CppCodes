#include <iostream>
using namespace std;
int N = 20;//Set the upper limit for printing no.
int n = 1; // Initialize n to 1
void fun1(); // Function prototypes
void fun2();
void fun1() {
    if (n <= N) {
        cout << n << " "; // Print n
        n++;
        fun2(); // Call fun2
    }
}
void fun2() {
    if (n <= N) {
        cout << n << " "; // Print n
        n++;
        fun1(); // Call fun1
    }
}
int main() {
    fun1(); // Start with fun1
    return 0;
}
