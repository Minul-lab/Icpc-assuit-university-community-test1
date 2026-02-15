#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int isP = 0;
    long long a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
        
    }
    long long b[n];
    int j = 0;
    for(int i = n-1; i>= 0; i--){
        
        b[j] = a[i];  
        j++;
    }
    for(int i = 0; i<n; i++){
        if(b[i] == a[i]){
            isP = 1;
        }else{
             isP = 0;
             cout<<"NO";
             break;
        }
        

    }
    
    if(isP){
        cout<<"YES";
    }

    return 0;
}