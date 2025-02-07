#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAutobiographicalNumber(int num) {
    string numStr = to_string(num);
    unordered_map<char, int> digitCount;

    for (char digit : numStr) {
        digitCount[digit]++;
    }

    for (size_t i = 0; i < numStr.length(); ++i) {
        if (digitCount['0' + i] != (numStr[i] - '0')) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutobiographicalNumber(num)) {
        cout << num << " is an autobiographical number." << endl;
    } else {
        cout << num << " is not an autobiographical number." << endl;
    }

    return 0;
}