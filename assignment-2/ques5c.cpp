#include <iostream>
using namespace std;

int main() {
    int n = 3;  

    
    int matrix[3][3] = {
        {1, 0, 0},
        {4, 5, 0},
        {7, 8, 9}
    };

    
    int size = n * (n + 1) / 2;
    int lower[size];
    int index = 0;

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            lower[index++] = matrix[i][j];
        }
    }

    
    cout << "The matrix is:" << endl;
    index = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j <= i) {
                cout << lower[index++] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
