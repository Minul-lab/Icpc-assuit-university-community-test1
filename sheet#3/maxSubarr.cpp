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
            cout<<arr[i]<< " ";
        }
        
        int maxi;
        for (int i = 0; i < n-1; i++)
        {   
            for(int j = i+1; j<n; j++){

                
                for(int k = i; k<=j; k++){
                    
                    maxi = arr[k];
                    for(int l = i; l<=j; l++){
                        if(maxi < arr[l]){
                            maxi = arr[l];
                        }
                    }
                    

                }
                cout<<maxi<< " ";
                
            }


            
        }

        cout<<endl;
        
        
        
    }

    return 0;
}