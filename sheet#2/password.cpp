#include <iostream>
using namespace std;

int main() {
    int x;

    // while (cin >> x) reads until the end of the input file
    while (cin >> x) {
        if (x == 1999) {
            cout << "Correct" << endl;
            break; // Terminate the program once found
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}


