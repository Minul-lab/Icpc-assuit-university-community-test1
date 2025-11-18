#include <iostream>
using namespace std;

int main(){
    long long int a,b,c,d;
    cin >>a>>b>>c>>d;
    long long int mult = a*b*c*d;
    int f = mult % 100;
    if (f == 0){
        cout<<"00";
    }else{cout<<f;}
    

}