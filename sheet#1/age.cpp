#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int y = x/365;
    int m = (x%365) / 30;
    int d = (x%365)%30;
    cout<< y <<" years\n"<<m<<" months\n" <<d<< " days";
}