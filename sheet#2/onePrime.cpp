#include<iostream>
using namespace std;

int main(){
    long long int n;
    string result;
    cin>>n;
    if(n==2){
        result = "YES";
    }else{
        for(int i = 2 ; i<n; i++){
        if(n%i==0){
            result = "NO";
            break;
        }else{
            result = "YES";
        }
    }
    }
    
    cout << result;
}