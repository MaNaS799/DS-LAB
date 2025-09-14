#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  
    cout << "Enter elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        
        if (!isDuplicate) {
            count++;
        }
    }

    cout << "Number of distinct integers: " << count << endl;

    return 0;
}
