#include <iostream>
using namespace std;

void sortEvenIndices(int arr[], int n) {
    
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n - 2; j += 2) {
            if (arr[j] > arr[j + 2]) {
                swap(arr[j], arr[j + 2]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 9, 2, 7, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortEvenIndices(arr, n);

    cout << "Array after sorting even indices: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
