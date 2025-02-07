#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParenthesis(const string& s) {
    stack<char> stack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else {
            if (stack.empty()) return false;
            char top = stack.top();
            stack.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValidParenthesis(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }

    return 0;
}