#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long count = 0;

    while(n > 0){
        n /= 5;
        count += n;
    }

    cout << count << "\n";
    return 0;
    
}