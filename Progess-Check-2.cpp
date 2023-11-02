

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int size = 0;
    int choice = 0;
    int num = 0;
    int index = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    bool found = false;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter 1 to insert element" << endl;
    cout << "Enter 2 to delete element" << endl;
    cout << "Enter 3 to find element" << endl;
    cout << "Enter 4 to display elements" << endl;
    cout << "Enter 5 to exit" << endl;

    while (choice != 5) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number to insert: ";
                cin >> num;
                cout << "Enter the index to insert: ";
                cin >> index;

                for (i = size; i > index; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[index] = num;
                size++;

                break;
            case 2:
                cout << "Enter the index to delete: ";
                cin >> index;

                for (i = index; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                break;
            case 3:
                cout << "Enter the number to find: ";
                cin >> num;

                for (i = 0; i < size; i++) {
                    if (arr[i] == num) {
                        found = true;
                        break;
                    }
                }

                if (found) {
                    cout << "Number found at index " << i << endl;
                } else {
                    cout << "Number not found" << endl;
                }

                break;
            case 4:
                cout << "Elements of the array are: ";
                for (i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;

                break;
            case 5:
                cout << "Exiting..." << endl;

                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        };

        cout << endl;
    }
                
}