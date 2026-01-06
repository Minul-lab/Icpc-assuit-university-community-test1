#include <iostream>
using namespace std;

class teacher {

    
public:
    string name;
    string dept;
    string subj;
    double salary;
    
    teacher( string n, string d, string s, double sal){
        this -> name = n;
        this -> dept = d;
        this -> subj = s;
        this -> salary = sal;


    }
    // copy constructor
    teacher( teacher &obj) {
        this->name = obj.name;
        cout<< "hello\n";
    }
    void getInfo(){
        cout<< name <<"\n";
        cout<< salary;
    }
    
};
class Student {
    string name;
    double* cgpaPtr;
    Student( string name, double cgpa){
        this -> name = name;
        cgpaPtr = new float;
    }
    void getInfo() {
        cout<< name;
        // cout<< cgpa;
    }
};

int main(){
    teacher t1( "Minul", "cse", "math", 25000);
    teacher t2(t1);
    t2.getInfo();
    t1.getInfo();
    
    return 0;
}
