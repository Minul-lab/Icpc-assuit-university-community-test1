#include <bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    // bubble sort

    // for(int i = 0 ; i <n-1; i++){
    //     bool isSwap = false;
    //     for(int j = 0 ; j < n-i-1; j++){
    //         if(a[j]>a[j+1]){
    //             swap(a[j] , a[j+1]);
    //             isSwap = true;
    //         }
            
    //     }
    //     if(!isSwap){
    //         cout<<"already sorted \n";
    //         break;
            
    //     }
        
    // }



    // selection sort
    // for(int i = 0; i<n-1; i++){
    //     int smlIdx = i;
    //     for(int j= i+1; j<n; j++){
    //         if(a[smlIdx]>a[j]){
    //             smlIdx = j;
    //         }
    //     }
    //     swap(a[i],a[smlIdx]);
    // } 



    // insetion sort

    for (int i = 1; i<n; i++){
        
        int prev = i-1;
        while(prev>=0 && a[prev]>a[prev+1]){
            swap(a[prev],a[prev+1]);
            prev--;
        }

    }




    for(int i = 0; i < n;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}