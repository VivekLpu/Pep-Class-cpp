#include <iostream>
using namespace std;

void sortOddIndices(int arr[], int n) {
    for (int i = 1; i < n; i += 2) {
        for (int j = 1; j < n - 2; j += 2) {
            if (arr[j] > arr[j + 2]) {
                swap(arr[j], arr[j + 2]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortOddIndices(arr, n);

    cout << "Array after sorting odd indices: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
