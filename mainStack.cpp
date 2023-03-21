#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
    int count; // number of elements in the stack
public:
    Stack() {
        top = NULL;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }

    // Push an item into the stack
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        count++;
    }
    // Pop an item from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
        count--;
    }

    // Return the top element of the stack
    int getTop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(12);
    stack.push(53);
    stack.push(36);
    stack.push(7);

    cout << "Size of the stack: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.getTop() << endl;

    stack.pop();

    cout << "Size of the stack: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.getTop() << endl;

    stack.pop();

    cout << "Size of the stack: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.getTop() << endl;

    stack.pop();

    cout << "Size of the stack: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.getTop() << endl;

    stack.pop();
    cout << "Size of the stack: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.getTop() << endl;

    stack.pop();

    return 0;
}
