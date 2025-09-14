#include <iostream>
#include <stack>
#include <cmath> 
using namespace std;

int evaluatePostfix(string expr) {
    stack<int> st;

    for (int i = 0; i < expr.length(); i++) {
        char c = expr[i];

        
        if (c >= '0' && c <= '9') {
            st.push(c - '0'); 
        }
        
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': st.push(pow(val1, val2)); break;
            }
        }
    }
    return st.top();
}

int main() {
    string expr;
    cout << "Enter postfix expression (digits only): ";
    cin >> expr;

    cout << "Result = " << evaluatePostfix(expr) << endl;

    return 0;
}
