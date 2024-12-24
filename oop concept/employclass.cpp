// Define a class Employee with attributes name, id,
// and salary. Write a program that includes a
// constructor to initialize the attributes, and
// overloaded functions to display salary details in
// different formats (annual, monthly).

#include<iostream>
using namespace std; 
class Employee{
    private:
      string name;
      int id;
      float salary;
    public:
      Employee(string name, int id, float salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
      }
    //salary annual 
    void displaySalary(){
        cout<<"your annual salary is "<<12* salary<<endl;
    }
    void displaySalary(string a){
        if(a=="monthly"){
            cout<<"your monthly is "<<salary;
        }
    }
};

int main(){
    Employee e("sakhi",12,20000);
    e.displaySalary();
    e.displaySalary("monthly");
}