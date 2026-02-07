#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        long long decimal = 0;
        cin>>n;
    
    while(n>0){
        
        // place = 10*digit;
        
        if(n%2 == 1){
            c++;
        }
        
        n/=2;
        
    }
    
    
    
    for (int i = 0; i<c; i++){
        
        
        decimal += pow(2,i);
        
        
    }
    cout<<decimal<<"\n";
    }
    

    return 0;
}