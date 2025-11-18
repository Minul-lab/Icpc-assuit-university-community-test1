#include <iostream>
using namespace std;

int main(){
    float a,b;
    cin>>a>>b;
    if(a == 0){
        if(b==0){
            cout<< "Origem";
        }else{cout<<"Eixo Y";}
        
    }else if ( b == 0){
        cout<<"Eixo X";
    }else if ( a > 0){
        if ( b > 0){
            cout<< "Q1";
        }else{cout<<"Q4";}
    }else if (a<0){
        if ( b> 0){
            cout<<"Q2";
        }else{cout<<"Q3";}
    }
    
}