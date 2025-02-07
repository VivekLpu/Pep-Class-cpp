#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void countFrequency(const string& str) {
    unordered_map<char, int> frequency;

    for (char ch : str) {
        frequency[ch]++;
    }

    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    countFrequency(input);

    return 0;
}