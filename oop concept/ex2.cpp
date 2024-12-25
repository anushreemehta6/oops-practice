// create a structure named student, store student name , array of marks of 3 subjects and roll number . calculate the average of every student and display it with its details .

#include<iostream>
using namespace std;
class student{
  private: 
   string name;
   int roll;
   float grades[3];
 public: 
   void average(){
    int sum =0;
    for(int i=0;i<3;i++){
     sum = sum + grades[i];
    }
    cout<<"the average is "<< sum/3<<endl;
   }
   void input(){
    
        for(int i =0;i<3;i++){
            cout<<"name-> ";
            cin>>name;
            cout<<"Roll-> ";
            cin>>roll;
            cout<<"grades-> ";
            cin>>name;

    }
   }
   void display(student a){
    cout<<"Name-> "<<a.name<<" "<<"Roll number "<<a.roll<<" " << endl;
    a.average();
   }
};

int main(){
    student s;
    cout<<"enter the details of students "
    s.input();
}