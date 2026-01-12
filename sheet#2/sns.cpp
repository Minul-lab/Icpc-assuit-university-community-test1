#include<iostream>
using namespace std;

int main(){
    int n,m,n1,n2;
    
    for(;;){
        cin>>n>>m;
        int sum=0;
        if(n>0 && m>0){
            if(n>m){
                n1=m;
                n2=n;
            }else{
                n1=n;
                n2=m;
            }
            for(int i = n1;i<=n2;i++){
            cout<<i<<" ";
            
            sum += i;
            
            }
            cout<<"sum ="<<sum<<"\n";

        }
        else{
            break;
        }
        
    }

}