#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        
    }
    int minC = INT_MAX;
    for (int i = 0; i < n; i++){
        int count = 0;
        while (arr[i]%2==0)
        {
            count++;
            arr[i]/=2;
        }
        minC = min(count,minC);
        
    }
    cout<<minC;
    
    
    

    return 0;
}