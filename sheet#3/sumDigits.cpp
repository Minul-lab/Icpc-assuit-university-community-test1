#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int sum = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        int digit = arr[i] - '0';
        sum += digit;
    }
    cout<<sum<<"\n";
    
    return 0;
}