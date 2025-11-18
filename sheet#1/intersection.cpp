#include <iostream>
using namespace std;

int main(){
    long long int a, b, c,d;
    cin>>a>>b>>c>>d;
    long long s = max(a , c);
    long long e = min( b , d);

    if (s <= e){
        cout<< s <<" " << e;
    }else { cout<< "-1";}
    
    
}