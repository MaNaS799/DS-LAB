#include <iostream>
using namespace std;

int main() {
    int arr[100];   
    int n = 0;      
    int choice;

    do {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { 
                cout << "Enter number of elements: ";
                cin >> n;
                cout << "Enter elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;
            }
            case 2: { 
                if (n == 0) cout << "Array is empty.\n";
                else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                }
                break;
            }
            case 3: { 
                int pos, val;
                cout << "Enter position (1 to " << n+1 << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;

                if (pos < 1 || pos > n+1) {
                    cout << "Invalid position!\n";
                } else {
                    for (int i = n; i >= pos; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[pos-1] = val;
                    n++;
                }
                break;
            }
            case 4: { 
                int val, index = -1;
                cout << "Enter value to delete: ";
                cin >> val;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == val) {
                        index = i;
                        break;
                    }
                }
                if (index == -1) cout << "Element not found!\n";
                else {
                    for (int i = index; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                    cout << "Element deleted.\n";
                }
                break;
            }
            case 5: { 
                int key, found = -1;
                cout << "Enter value to search: ";
                cin >> key;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        found = i;
                        break;
                    }
                }
                if (found == -1) cout << "Element not found.\n";
                else cout << "Element found at position " << found+1 << endl;
                break;
            }
            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
