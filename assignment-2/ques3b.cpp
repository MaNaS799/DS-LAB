#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,7,8,9,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int low = 0, high = n - 1, mid;

    while (low < high) {
        mid = (low + high) / 2;

        if (arr[mid] != mid + 1) {
            high = mid;  
        } else {
            low = mid + 1;  
        }
    }

    cout << "The missing number is: " << low + 1 << endl;
    return 0;
}
