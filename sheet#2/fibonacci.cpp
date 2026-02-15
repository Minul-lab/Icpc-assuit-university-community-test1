#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int j;
    cin>>j;
    
    int n= 0, n1 = 1, n2;
    if(j==1){
        cout<<n;
    }else if (j==2)
    {
       cout<<n<<" "<<n1;
    }
    else if(j>=3){
        cout<<n<<" "<<n1<<" ";
        for (int i = 0; i<j-2; i++){
            
            n2 =n1 + n;
            n= n1;
            n1 = n2;
            cout<<n2;
            cout<<" ";
    }
    }
    

    return 0;
}