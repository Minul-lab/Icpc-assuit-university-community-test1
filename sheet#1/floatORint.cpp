#include<iostream>
#include <iomanip> 
using namespace std;
int main(){
    float n;
    cin>>n;
    if( n == int(n) ){
        cout<< "int "<<int(n);
    }else {cout<< "float "<< int(n) <<" "<<(n-int(n));}
    // cout<< int(n);
}