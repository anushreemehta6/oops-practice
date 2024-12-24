// Create a structure Rectangle with attributes length
// and width. Write a program that calculates the area
// and perimeter of multiple rectangles and displays
// the rectangle with the largest area.
#include<iostream>
using namespace std;
struct rectangle{
    float length;
    float width;
     
    void area( float length , float width ){
        cout<<length*width << endl;
    }
    void parimeter(float length , float width){
        cout << 2*(length+width) <<endl;
    }
};
int main(){
   rectangle r1;
   r1.length = 20;
   r1.width = 10;
   r1.area(20,10);
   r1.parimeter(20,10);
}