// Develop a C++ program to demonstrate the use of
// a destructor. Create a class Account that allocates
// dynamic memory in the constructor and deallocates
// it in the destructor

#include<iostream>
using namespace std;
class account{
  private:
   double* amount;
  public:
   account(double d){
    amount = new double(d);
   }
   ~account(){
    delete amount;
   }
   void display(){
    cout<<"amount in account "<<*amount<<endl;
   }
};
int main(){
    account A(5000);
    A.display();
    A.~account();
}