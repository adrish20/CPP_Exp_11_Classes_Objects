//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//C++ program to find the area of a cuboid using class and three methods for input,calculation and output respectively
#include<iostream>
using namespace std;
class Area_cuboid{ //class to calculate area of cuboid
    public:
    float l,b,h,volume;
    //method take input length, breadth and height
    void input(){
        cout<<"Enter length of cuboid: ";
        cin>>l;
        cout<<"Enter breadth of cuboid: ";
        cin>>b;
        cout<<"Enter height of cuboid: ";
        cin>>h;
    }
    //method to calculate volume
    void calculate(){
        volume = l*b*h;
    }
    //method to print the result
    void output(){
        cout<<"Volume of cuboid is: "<<volume<<" cm^3";
    }
};

int main(){
    Area_cuboid C1; //create object C1 for the class
    C1.input();  //Call the input method
    C1.calculate();  //Call the calculate method
    C1.output();  //Call the output method
}
/*
OUTPUT:
Enter length of cuboid: 5
Enter breadth of cuboid: 4
Enter height of cuboid: 3
Volume of cuboid is: 60 cm^3
*/