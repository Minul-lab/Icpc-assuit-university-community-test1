#include<iostream>
using namespace std;

int main(){
    int n;
    int x,y;
    int n1,n2;
    cin>>n;
    for(int i = 0; i<n;i++){
        
        cin>>x>>y;
        
        int sum = 0;
        if( x > y){
            n1= y;
            n2 = x;
        }else{
            n1 = x;
            n2 = y;
        }
        
        for(int j = n1+1;j<n2;j++){
            if(j%2 != 0){
                sum = sum + j;
                // cout<<j;
            }
        }
        cout<<sum<<"\n";

    }
}