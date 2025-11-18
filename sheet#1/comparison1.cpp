#include <iostream>
using namespace std;
int main() {
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c == '>'){
        bool x = a > b;
        if (x == 0){
            cout<< "Wrong";
        }else {cout<<"Right";}
    
    }else if (c == '<'){
        bool y = a < b;
        if (y == 0){
            cout <<"Wrong";

        }else{ cout<< "Right";}

    }else if (c == '=')
    {
        if (a == b){
            cout<<"Right";
        }else{ cout<<"Wrong";}
    }


}