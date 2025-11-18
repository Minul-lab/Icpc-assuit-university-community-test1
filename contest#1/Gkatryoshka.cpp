#include<iostream>

using namespace std;

int main(){
    long long int n,m,k,sub1,sub2;
    int a,b;
    long long int katry = 0;
    long long int smallest;
    cin>>n>>m>>k;
    if(n>=1 && k>=1){
        if( m == 0){
          katry =katry +min((n/2),k); 
        }else{
            smallest = min(n, min(m,k));
            katry = katry + smallest;
            if ( m - katry == 0 ){
                sub1 = n - katry;
                sub2 = k - katry;
                
                katry = katry + min(sub2,(sub1/2));
            }

        }
    }
    
    cout << katry;
}