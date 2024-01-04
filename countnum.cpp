#include <iostream>
#include <string>
using namespace std;

int countEvenDigits(int n) {
    string num = to_string(n);
    int count = 0;

    for (char c : num) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int nn;
    cout << "Enter a number: ";
    cin >> nn;

    int result = countEvenDigits(nn);
    cout << result << endl;

    return 0;
}