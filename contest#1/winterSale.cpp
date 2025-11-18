#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int x,p;
    
    cin>>x>>p;
    float c =1 - float(x)/100.00;
    float d = float(p)/c;

    cout<<fixed<<setprecision(2)<<d;
}