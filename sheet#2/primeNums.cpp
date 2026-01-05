#include <iostream>
using namespace std;

int main(){
    int n,prime;
    string isPrime;
    cin>>n;
    
        for(int j = 2; j<=n; j++){
            if( j == 2){
                isPrime="yes";
            }else{
                for(int i = 2; i<j; i++){
        
                    if( j%i == 0){
                        isPrime = "no";
                        break;    
                    }else{
                        isPrime = "yes";
                    }
               
                
                } 
            }
            if(isPrime == "yes"){
                cout<< j<<" ";
            }
            
            
            
        }   
    
    
}