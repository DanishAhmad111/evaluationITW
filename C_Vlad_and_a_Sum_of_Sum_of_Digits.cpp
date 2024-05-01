#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int totalSum = 0;
        for (int j = 1; j <= n; j++) {
            totalSum += sumOfDigits(j);
        }
        cout << totalSum << endl;
    }
    return 0;
}