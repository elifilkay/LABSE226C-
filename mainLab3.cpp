#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* back;
    int count;
public:
    Queue() {
        front = NULL;
        back= NULL;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }

    // Add an item to the queue
    void enqueue(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (back != NULL) {
            back->next = newNode;
        }

        back = newNode;

        if (front == NULL) {
            front = newNode;
        }

        count++;
    }

    // Remove an item from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
        count--;
    }

    // Return the top element of the queue
    int top() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return front->data;
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Size of the queue: " << queue.size() << endl;
    cout << "Top element of the queue: " << queue.top() << endl;

    queue.dequeue();

    cout << "Size of the queue: " << queue.size() << endl;
    cout << "Top element of the queue: " << queue.top() << endl;

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    cout << "Size of the queue: " << queue.size() << endl;

    queue.dequeue();

    return 0;
}

