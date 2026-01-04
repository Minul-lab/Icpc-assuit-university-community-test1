#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++ ){
        int x;
        cin>>x;
        long long fact = 1;
        if(x==0){
            fact = 1;
        }else{
            for( int j = 1; j<=x;j++){
            fact = j*fact;
            }
        }
        
        cout<<fact<<"\n";
    }
    
}