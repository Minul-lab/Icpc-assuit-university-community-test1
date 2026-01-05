#include <iostream>
using namespace std;

class teacher {

    
public:
    string name;
    string dept;
    string subj;
    double salary;
    
    teacher( string n, string d, string s, double sal){
        name = n;
        dept = d;
        subj = s;
        salary = sal;


    }
    void getInfo(){
        cout<< name;
        cout<< salary;
    }
    
};

int main(){
    teacher t1( "Minul", "cse", "math", 25000);
    
    t1.getInfo();
    
    return 0;
}
