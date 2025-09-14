#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "DataStructure";
    stack<char> s;

    
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    
    string rev = "";
    while (!s.empty()) {
        rev += s.top();
        s.pop();
    }

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << rev << endl;

    return 0;
}
