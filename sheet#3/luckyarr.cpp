#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    // input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minimum = arr[0];

    // find minimum
    for(int i = 1; i < n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(minimum == arr[i]){
            count++;
        }
    }
    
    if(count%2 == 0){
        cout<<"Unlucky";
    }else{
        cout<<"Lucky";
    }
    

    return 0;
}
