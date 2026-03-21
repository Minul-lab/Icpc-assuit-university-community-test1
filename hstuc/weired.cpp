#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if(n%2 != 0){
        cout<<"Weird";
    }else if (n%2 == 0)
    {
        if(n>=2 && n<=5){
            cout<<"Not Weird";
        }else if (n>=6 && n<=20)
        {
            cout<<"Weird";
        }else if (n>20)
        {
            cout<<"Not Weird";
        }
        
        
    }
    

    return 0;
}