#include<iostream>
using namespace std;
int main(){
    int n;
    long long int x;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x;
        int digit;
        if(x>0){
            while(x>0){
            digit = x%10;
            cout<<digit<<" ";
            x = x/10;
            }
            cout<<"\n";
        }else{
            cout<<0<<"\n";
        }
        
        
        
    }
}