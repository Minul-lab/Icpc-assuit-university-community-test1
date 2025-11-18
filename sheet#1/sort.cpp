#include <iostream>
#include <algorithm> // For std::min, std::max
using namespace std;

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;

    long long int s, m, l; // s: smallest, m: middle, l: largest

    // Method 1: The manual way with if-else
    // Find the smallest (s)
    if (a <= b && a <= c) {
        s = a;
    } else if (b <= a && b <= c) {
        s = b;
    } else {
        s = c;
    }

    // Find the largest (l)
    if (a >= b && a >= c) {
        l = a;
    } else if (b >= a && b >= c) {
        l = b;
    } else {
        l = c;
    }

    // Find the middle (m) using subtraction, which is robust
    m = a + b + c - s - l;

    // Print sorted numbers
    cout << s << "\n";
    cout << m << "\n";
    cout << l << "\n";

    // Print original numbers separated by a blank line
    cout << "\n";
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}