// Implement a program to demonstrate
// parameterized constructors. Create a class Circle
// with a constructor that accepts the radius and
// calculates the area and circumference.

#include<iostream>
using namespace std;
class circle{
    private:
     float radius;
    public: 
     circle(float radius){
        this->radius = radius;
     }
     void area(){
        cout<<"the area of circle is "<< 2*3.14*radius<<endl;

     }
};
int main(){
  circle c(2);
  c.area();
}