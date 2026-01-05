#include<iostream>
using namespace std;

int main(){
    int l1,l2,digit,n,lucky,unlucky;
    bool found = true;
    // 4,7,47,44,74,77,477,744
    cin>>l1>>l2; 

    for(int i = l1; i<=l2; i++ ){
        n = i;  // 5
        while(n>0){
            digit = n%10;
            
            if(digit == 4 || digit == 7){
                // 
                lucky = n;
                break;
            }else{
                lucky = -1;
                found = false;
                break;
            }
            n = n/10;
            
        }
        if(found){
            cout<< lucky << " ";
        
        }
        
    }if(!found){
        cout<<lucky;
    }

}