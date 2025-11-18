#include <iostream>
using namespace std;

int main(){
    long long int n,k,a;
    cin>>n>>k>>a;
    long long int result = (n*k)/a;
    if( (n*k) % a == 0){
        if(result>2147483647){
            cout<<"long long";
        }else{cout<<"int";}
    }else{cout<<"double";}
    
}