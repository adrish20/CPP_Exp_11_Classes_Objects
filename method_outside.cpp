//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//C++ program to define method outside class and then call it in main function
#include <iostream>
using namespace std;
class Student{ //declare class student
    public:
    void display(); //declare method display
};
void Student::display(){  //define the method outside class
    cout<<"I'm studying in 2nd year"<<endl;
}
int main(){
    Student s1; //create object s1
    s1.display();  //class display method for object s1
}
/*
OUTPUT:
I'm studying in 2nd year
*/