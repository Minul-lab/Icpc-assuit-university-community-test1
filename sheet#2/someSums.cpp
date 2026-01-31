#include <iostream>
using namespace std;

int main(){
    int n,a,b,bsum=0;
    cin>>n>>a>>b;
    
    for(int i = 1; i<=n;i++){
        int c=i;
        int sum = 0;
        while(c>0){
            int digit = c % 10;
            
            sum = sum + digit;
            
            c = c/10;
        }
        if(sum>=a && sum<=b){
            bsum+=i;
        }
        


    }
    cout<<bsum;
    
}
