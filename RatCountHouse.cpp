#include <iostream>
#include <vector>
using namespace std;

int ratCountHouse(int r, int unit, const vector<int>& arr) {
    int totalFoodRequired = r * unit;
    int currentFood = 0;
    int houseCount = 0;

    for (int food : arr) {
        currentFood += food;
        houseCount++;
        if (currentFood >= totalFoodRequired) {
            return houseCount;
        }
    }

    return -1; 
}

int main() {
    int r = 7; 
    int unit = 2; 
    vector<int> arr = {2, 3, 4, 5, 1}; 

    int result = ratCountHouse(r, unit, arr);
    if (result != -1) {
        cout << "Number of houses required: " << result << endl;
    } else {
        cout << "Not enough food in all houses combined." << endl;
    }

    return 0;
}