// Write a C++ program to define a structure
// Complex to represent complex numbers. The
// program should perform addition, subtraction, and
// multiplication of two complex numbers using
// structures.
#include<iostream>
using namespace std;
struct complex{
  int real;
  int imag;

  void addition(complex d){
   int c =  d.real + real;
   int e = d.imag + imag;
   cout<< c << "+"<< e<<"i"<<endl;
    
  }
};
int main(){
  complex c1 , c2;
  c1.real = 2;
  c1.imag = 3;
  c2.real = 2;
  c2.imag = 5;
  c1.addition(c2);
  
}