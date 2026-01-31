#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,place=1, binary=0;
    cin>>n;
    while(n>0){
        int digit = n%2;
        place = 10*digit;
        binary = binary + digit * place;
        place = place*10;
        n/=2;
        
    }
    cout<<binary;
    return 0;
}