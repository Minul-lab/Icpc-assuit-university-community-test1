#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int n1 = n;
    int n2 = 1;
    for( int i = 0;i<n;i++){
        for(int i = n1-1;i>0;i--){
            cout<<" ";
        }
        if(n2<n*2){
            for(int i = 0;i<n2;i++){
                cout<<"*";
            }
        }
        n1--;
        n2+=2;
        cout<<"\n";
    }
}