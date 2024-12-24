// Create a class Rectangle with private attributes
// length and width. Write a program to implement
// function overloading to calculate the area of the
// rectangle by passing different combinations of
// length and width (default parameters, user input).
#include<iostream>
using namespace std;
class rectangle{
    private :
      int length;
      int width;
    public: 
    //  rectangle(int length, int width){
    //     this -> length = length;
    //     this -> width = width; 
    //  }
     void add(int l, int w){
        cout<<l+w<<endl;
     }
     void add(double l, double w){
        cout<<l+w<<endl;
     }
};

int main(){
    rectangle r1;
    r1.add(5,3);
    r1.add(0.5,0.2);
}