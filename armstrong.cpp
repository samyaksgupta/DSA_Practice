#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int order = to_string(n).length();
    int total = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        total += pow(digit, order);
        temp /= 10;
    }
    cout << total << endl;

    return 0;
}