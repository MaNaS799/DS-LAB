#include <iostream>
using namespace std;

int main() {
    int n = 3;  

    
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    
    int size = n * (n + 1) / 2;
    int symm[size];
    int index = 0;

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            symm[index++] = matrix[i][j];
        }
    }

    
    
    return 0;
}
