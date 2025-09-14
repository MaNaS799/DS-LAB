#include <iostream>
using namespace std;

int main() {
    int n = 3;  

    
    int matrix[3][3] = {
        {1, 2, 3},
        {0, 4, 5},
        {0, 0, 6}
    };

    
    int size = n * (n + 1) / 2;
    int upper[size];
    int index = 0;

    
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            upper[index++] = matrix[i][j];
        }
    }

    
    cout << "The matrix is:" << endl;
    index = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) {
                cout << upper[index++] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
