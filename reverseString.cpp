#include <iostream>
using namespace std;

void reverseString(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    int left = 0, right = length - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[100];  
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}
