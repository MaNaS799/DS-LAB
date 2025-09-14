#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;

    for (int i = 0; i < expr.length(); i++) {
        char c = expr[i];

        
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
