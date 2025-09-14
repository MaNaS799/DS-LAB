#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str[3];
    
    cout << "Enter 3 strings:" << endl;
    for (int i = 0; i < 3; i++) {
        getline(cin, str[i]);
    }
    
    
    sort(str, str + 3);
    
    cout << "Strings in alphabetical order:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << str[i] << endl;
    }
    
    return 0;
}
