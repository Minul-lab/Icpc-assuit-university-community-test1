#include <iostream>
using namespace std;

int main(){
    char c;
    cin>> c;
    if (int(c)>=65 && int(c)<= 90){
        char x = int(c)+32;
        cout<< x;
    }
    else if (int(c)>=97 && int(c)<= 122){
        char x = int(c)-32;
        cout<< x;
    }

}
