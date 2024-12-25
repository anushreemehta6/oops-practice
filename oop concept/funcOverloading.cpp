//overload a function 
#include<iostream>
using namespace std;

class rectangle{
    private:
      double length;
      double width;
    public: 
    rectangle(double l, double w){
        // this -> length = length;
        // this -> width = width; 
        length = l;
        width = w;
    }
    void area(int length , int width ){
         cout<<length*width;
    }
    void area(double length, double width){
       cout<<length*width;
    }
};

int main(){
    rectangle a(20,10);//int
    a.area(20,10);
    rectangle b(20.2,10.2);//double
    b.area(20.2,10.2);

}