#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count;
}

bool isSphenic(int n) {
    int count = 0, product = 1, original = n;

    for (int i = 2; i <= n && count < 3; i++) {
        if (isPrime(i) && n % i == 0) {
            count++;
            product *= i;
            n /= i;
            while (n % i == 0) {
                return false; 
            }
        }
    }

    return (count == 3 && product == original && countDivisors(original) == 8);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSphenic(num)) {
        cout << num << " is a Sphenic Number." << endl;
    } else {
        cout << num << " is NOT a Sphenic Number." << endl;
    }

    return 0;
}