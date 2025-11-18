#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;  // Since the constraints are 1 ≤ A,B ≤ 103, integers are enough
    cin >> A >> B;

    double result = (double)A / B;

    cout << "floor " << A << " / " << B << " = " << (int)floor(result) << "\n";
    cout << "ceil " << A << " / " << B << " = " << (int)ceil(result) << "\n";
    cout << "round " << A << " / " << B << " = " << (int)round(result) << "\n";

    return 0;
}
