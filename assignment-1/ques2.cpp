#include <iostream>
using namespace std;

void deleteAt(int arr[], int &n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                deleteAt(arr, n, j); 
            } else {
                j++; 
            }
        }
    }

    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
