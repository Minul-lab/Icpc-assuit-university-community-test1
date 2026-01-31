#include <stdio.h>

int main(){
    long long int x;
    scanf("%lld",&x);
    long long int n[x];
    long long int sum= 0;
   
    for(int i = 0; i<x; i++){
        scanf("%lld",&n[i]);
        sum+=n[i];
        
    }
    if(sum>0){
        printf("%lld", sum);
    }else{ 
        printf("%lld", -1*sum);
    }
    //ghgh
    
}