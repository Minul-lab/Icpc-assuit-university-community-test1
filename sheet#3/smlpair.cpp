#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i = 0; i <n; i++){
        int q;
        cin>>q;
        int arr[q];
        for(int j = 0; j<q; j++){
           cin>>arr[j];
        }
        
        
        int smallest=INT_MAX;
        for(int j = 0 ; j<q-1; j++){
        
            
            
            for(int k = j+1 ; k< q ; k++){
                
                
                
                // cout<<a1<<" "<<a2<<" "<<k+1<<" "<< j+1<<" "<<sum<<"\n";
                smallest= min(smallest,arr[j]+arr[k]+k-j);
                
            }
            
            
            
        }
        cout<<smallest<<"\n";
        


    }

    return 0;
}