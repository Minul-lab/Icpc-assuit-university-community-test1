#include <iostream>
using namespace std;

int main (){

    int n,m,gcd;
    cin>>n>>m;
    for(int i=n; i>0; i--){
        if(n%i==0){
            if(m%i==0){
                gcd=i;
                break;
            }
        }
    }
    cout<<gcd;

    return 0;
}