#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long  a[n];
    
    for(int i = 0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    long long x;
    scanf("%lld", &x);
    for(int i = 0; i< n;i++){
        if(a[i]==x){
            printf("%d",i);
            return 0;
        }
    }

    printf("-1");
    return 0;

}