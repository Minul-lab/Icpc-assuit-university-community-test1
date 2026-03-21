#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int k = 1; k<=t; k++){
        int a,b,c;
        cin>>a>>b>>c;
        bool test=false;
        for(long long i = 0;i*a<=c;i++){
            int rem = c-a*i;


            if(rem % b == 0){
                test = true;
                break;
            }

        }
        cout << "Case " << k << ": ";
        if(test){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        

    }

    return 0;
}