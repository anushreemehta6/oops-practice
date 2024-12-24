// Implement a program that creates a class Student
// and dynamically allocates memory for an array of
// Student objects using pointers. Input details for
// multiple students and display their data.
#include<iostream>
using namespace std;
class student{
    private:
     string name;
     int id;
     int age;
    public: 
    void displayData(){
        cout<<"name = "<< name<< endl;
        cout<<"age = "<< age<< endl;
        cout<<"id = "<< id<< endl;
    }
    void inputData(){
        cout<<"name="<<endl;
        cin>>name;
        cout<<"age="<<endl;
        cin>>age;
        cout<<"id="<<endl;
        cin>>id;
        
    }
};
int main(){
    student* a = new student[2];
    for(int i=0;i<2;i++){
        a[i].inputData();
    }
     for(int i=0;i<2;i++){
        a[i].displayData();
    }

}