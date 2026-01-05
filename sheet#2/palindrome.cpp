#include<iostream>
using namespace std;

int main(){
    long long int n, original,reversed = 0,digit;
    cin>>n;
    original = n;
    for (; n>0 ; ){
        digit = n%10;
        n = n/10;
        reversed = reversed*10 + digit;
    }
    if( reversed == original){
        cout<< reversed<<"\nYES";

    }else{ cout<< reversed<<"\nNO";}
    // cout<< reversed;


    return 0;
}