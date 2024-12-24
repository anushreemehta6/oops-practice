// Define a structure Book with members title,
// author, price, and ISBN. Write a program to manage
// an array of books, allowing the user to search for a
// book by its title or ISBN.
#include<iostream>
using namespace std;
struct book
{
    string name;
    string author;
    float price;
    int ISBN;
};

int main(){
   book a[5];
   //input all the values 
   for(int i =0;i<5;i++){
    cout<<"name = ";
    cin>>a[i].name;
    cout<<"author = ";
    cin>>a[i].author;
    cout<<"price= ";
    cin>>a[i].price;
    cout<<"ISBN= ";
    cin>>a[i].ISBN;

   }
   //searching using name
   string s;
  cout<<"enter name"<<endl;
  cin>>s;
  for(int i= 0;i<5;i++){
    if(s==a[i].name){
        cout<< "book found in the stack";
    }
  
  }
  //searching using ISBN
  int d;
    cout<<"enter ISBN"<<endl;
  cin>>d;
  for(int i= 0;i<5;i++){
    if(d==a[i].ISBN){
        cout<< "book found in the stack";
    }
   
  }  
  
}