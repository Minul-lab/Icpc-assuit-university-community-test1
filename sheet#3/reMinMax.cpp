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
        int max= arr[0];
        int min = arr[0];
        for(int i = 0; i<n; i++){
            if( max< arr[i]){
                max = arr[i];
            }
            if(min>arr[i]){
                min = arr[i];
            }

        }
        int n1, n2;
        for (int i = 0; i < n; i++)
        {
            if(max == arr[i]){
                n1 =i;
            }
            if(min == arr[i]){
                n2 = i;
            }
        }
        swap( arr[n1], arr[n2]);
        for(int i = 0; i<n; i++){
            cout<< arr[i]<< " ";
        }


    return 0;
}