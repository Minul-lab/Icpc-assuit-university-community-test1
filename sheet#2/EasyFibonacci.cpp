#include<iostream>
using namespace std;
int main(){
    int n;
    int fibn,pn = 1,n1 = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        

        cout<<n1 << " ";
        fibn = pn + n1;
        n1 = pn;
        pn = fibn;
        

    }
    cout<< endl;

}