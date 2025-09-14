#include <iostream>
using namespace std;

int main() {
    int n = 3;  

    
    int matrix[3][3] = {
        {5, 0, 0},
        {0, 8, 0},
        {0, 0, 3}
    };

    
    int diagonal[3];
    for(int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    
    cout << "The matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                cout << diagonal[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
