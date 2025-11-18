#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(9);
    double p =  3.141592653;
    double r;
    cin>>r;
    cout<< p*r*r;
}