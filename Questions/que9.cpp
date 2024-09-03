#include <iostream>
#include <queue> // Include the queue library
using namespace std;
class Queue {
private:
    queue<int> q; // Use STL queue as the underlying container
public:
    void enqueue(int x) {
        q.push(x); // Add element to the rear of the queue
    }
    int dequeue() {
        if (q.empty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return -1 if queue is empty
        }
        int frontElement = q.front(); // Get the front element
        q.pop(); // Remove the front element
        return frontElement;
    }
};
int main() {
    Queue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    cout << "Dequeued element: " << myQueue.dequeue() << endl;
    cout << "Dequeued element: " << myQueue.dequeue() << endl;
    cout << "Dequeued element: " << myQueue.dequeue() << endl;
    cout << "Dequeued element: " << myQueue.dequeue() << endl; // Queue is empty
    return 0;
}
