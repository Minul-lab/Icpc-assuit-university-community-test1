#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            // cout<<arr[i];
        }
        int count = n;
        for( int i = 0; i<n-1; i++){
            for( int j = i+1; j<n; j++){
                // for( int k = i;k<=j; k++){
                //     cout<< arr[k]<<" ";
                // }
                bool ok = true;
                for(int l= i; l<j; l++){
                    
                    if(arr[l]>arr[l+1]){
                        ok = false;
                        break;
                    }
                }
                
                // cout<<endl;
                if(ok){
                    count++;
                }
            
            
                
            }
            
        }
        cout<<count<<endl;
    }

    return 0;
}