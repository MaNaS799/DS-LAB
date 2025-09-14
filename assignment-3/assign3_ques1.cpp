#include <iostream>
#include <stack>
using namespace std;


int peek(stack<int> s, int pos) {
    if (pos <= 0 || pos > s.size()) {
        cout << "Invalid position!" << endl;
        return -1;
    }
    for (int i = 1; i < pos; i++) {
        s.pop();
    }
    return s.top();
}


void display(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    int choice, val, pos;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull (not applicable in STL)\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            s.push(val);
            cout << val << " pushed onto stack\n";
            break;

        case 2:
            if (s.empty())
                cout << "Stack is empty (nothing to pop)\n";
            else {
                cout << s.top() << " popped from stack\n";
                s.pop();
            }
            break;

        case 3:
            if (s.empty())
                cout << "Stack is empty\n";
            else
                cout << "Stack is NOT empty\n";
            break;

        case 4:
            cout << "Stack in STL grows dynamically, so isFull() is not applicable\n";
            break;

        case 5:
            display(s);
            break;

        case 6:
            cout << "Enter position to peek (1 = top): ";
            cin >> pos;
            val = peek(s, pos);
            if (val != -1)
                cout << "Element at position " << pos << " is " << val << endl;
            break;

        case 7:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
