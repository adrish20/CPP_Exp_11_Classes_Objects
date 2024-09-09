//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//C++ program to define a class and call it for two objects and display it
#include <iostream>
#include <string.h>
using namespace std;
class Student{
    public:  //set the variables to public to access from class
    string name;
    string branch;
    string year;
    float age;
    float result;

    void display(){  //method to display details
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Result: "<<result<<endl;
        cout<<endl;
    }
};
int main(){
    Student S1; //create object S1
    //Assign values attributes
    S1.name = "Adrish Purkayastha";
    S1.age = 20;
    S1.branch = "EnTC";
    S1.year = "2nd";
    S1.result = 9.03;
    S1.display();//call display method
    Student S2;
    S2.name = "Aditya Sthawarmath";
    S2.age = 19;
    S2.branch = "EnTC";
    S2.year = "2nd";
    S2.result = 8.64;
    S2.display();
}
/*
OUTPUT:
Name: Adrish Purkayastha
Age: 20
Branch: EnTC
Year: 2nd
Result: 9.03

Name: Aditya Sthawarmath
Age: 19
Branch: EnTC
Year: 2nd
Result: 8.64
*/