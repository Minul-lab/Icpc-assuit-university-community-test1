#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a++; // post increment, do work then update
    cout<< "a = "<<a << "\n"<<"b = "<<b<<"\n";
    int c = 20;
    int d = ++c; // pre increment, update then do work
    cout << "c = "<< c <<"\n"<<"d = "<<d;
    return 0;
}