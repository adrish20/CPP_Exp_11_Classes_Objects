//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//C++ program to implement method inside class
#include <iostream>
using namespace std;
class Student{
    public:
    void my_method(){
        cout<<"I'm studying in 2nd year"<<endl;   
    }
};
int main(){
    Student s1;
    s1.my_method();
}
/*
OUTPUT:
I'm studying in 2nd year
*/