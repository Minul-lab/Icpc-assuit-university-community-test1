#include<iostream>

using namespace std;

int main(){
    int a;
    cin>> a;
    
    if (a>=2){
       for (int i = 2 ; i <= a ; i += 2){
        cout<< i << "\n";
    } 
    }else{cout<<-1;}

}