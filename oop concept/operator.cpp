//operator overloading 

#include<iostream>
using namespace std;
class box{
    private:
      int length;
      int width ;
    public:
     box(int length, int width){
        this->length = length;
        this->width = width;
     }

     box operator + (box b){
         return box(length+b.length, width+b.width);
     }
     void display(){
        cout<<length <<" "<< width<<endl;
     }
};

int main(){
    box b1(10,20);
   
    box b2(20,30);
    box b3 = b1+b2;
    b3.display();
    
}