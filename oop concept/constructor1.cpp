// Write a C++ program to demonstrate a default
// constructor. Create a class Book with a default
// constructor that initializes the book’s title and price.
// Display the book details
#include<iostream>
using namespace std;
class book{
   private :
    string name; 
    float price;
public: 
    book(){
      name = "untitled";
      price = 2000;
    }
    void display(){
        cout<<"name = "<<name<<endl;
    
    }
  
};
int main(){
    book b1;
    b1.display();
    

}