#include <iostream>
using namespace std;
// Node structure for the Priority Queue
struct Node {
    int data;
    int priority;
    Node* next;
};
class PriorityQueue{
private:
    Node* front;
public:
    // Constructor
    PriorityQueue() {
        front = nullptr;
    }
    // Function to check if the Priority Queue is empty
    bool isEmpty(){
        return (front == nullptr);
    }
    // Function to insert an element into the Priority Queue
    void enqueue(int data, int priority){
        Node* newNode = new Node;
        newNode->data = data;
        newNode->priority = priority;
        newNode->next = nullptr;
// If the Priority Queue is empty or the new element has 
    // higher priority than the front
        if (isEmpty() || priority < front->priority){
            newNode->next = front;
            front = newNode;
        } 
        else {
        Node* temp = front;
        while (temp->next != nullptr && temp->next->priority <= priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
// Function to remove and return the element with the highest priority
    int dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty." << endl;
            return -1; // Return -1 to indicate an empty queue
        } 
    else {
            Node* temp = front;
            front = front->next;
            int data = temp->data;
            delete temp;
            return data;
        }
    }
// Function to display the Priority Queue
    void display() {
        if (isEmpty()) {
            cout << "Priority Queue is empty." << endl;
        }
        else {
            Node* temp = front;
            cout << "Priority Queue: ";
            while (temp != nullptr){
                cout << "(" << temp->data << ", " << temp->priority << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main() {
    cout<<endl<<"Priority Queue using Linked List"<<endl; 
    PriorityQueue pq;
    pq.enqueue(21, 5);
    pq.enqueue(22, 4);
    pq.enqueue(44, 30);
    pq.enqueue(43, 31);
    pq.enqueue(22, 331);
    pq.enqueue(65, 43);  
    pq.display();
    cout << "Dequeued element: " << pq.dequeue() << endl;
    pq.display();
return 0;
}