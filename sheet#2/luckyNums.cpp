#include<iostream>
using namespace std;

int main(){
    int l1,l2,digit,n,lucky;
    bool anyfound=false;
    
    // 4,7,47,44,74,77,477,744
    cin>>l1>>l2; 

    for(int i = l1; i<=l2; i++ ){
        n = i; 
        bool isLucky = true;
        while(n>0){
            digit = n%10;
            
            if(digit == 4 || digit == 7){
                isLucky = true;
            }else{
                isLucky =false;
                
                break;
            }
            n = n/10;
            
        }
        if(isLucky){
            lucky = i;
            cout<< lucky<<" ";
            anyfound = true;
        }
        
        
    }
    if(!anyfound){
        cout<<-1;
    }
    
    
    
    

}