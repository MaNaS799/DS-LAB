#include <iostream>
using namespace std;

int main() {
    int n = 4;  

    
    int matrix[4][4] = {
        {2, 3, 0, 0},
        {1, 4, 5, 0},
        {0, 6, 7, 8},
        {0, 0, 9, 1}
    };

    
    int lower[3], main[4], upper[3];

    
    for(int i = 0; i < n; i++) {
        main[i] = matrix[i][i];  
        if(i < n-1)
            upper[i] = matrix[i][i+1]; 
        if(i > 0)
            lower[i-1] = matrix[i][i-1]; 
    }

    
    cout << "The matrix is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                cout << main[i] << " ";
            else if(j == i + 1)
                cout << upper[i] << " ";
            else if(j == i - 1)
                cout << lower[i-1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
