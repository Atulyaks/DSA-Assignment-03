#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 5  // Maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed onto stack." << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
        } else {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Stack elements (top to bottom):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Display Stack\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
            case 5:
                if (s.isEmpty())
                    cout << "Stack is Empty!" << endl;
                else
                    cout << "Stack is NOT Empty!" << endl;
                break;
            case 6:
                if (s.isFull())
                    cout << "Stack is Full!" << endl;
                else
                    cout << "Stack is NOT Full!" << endl;
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid Choice! Try again." << endl;
        }
    }
    return 0;
}
