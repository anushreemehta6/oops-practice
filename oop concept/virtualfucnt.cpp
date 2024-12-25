//virtual functions 
#include<iostream>
using namespace std; 
class parent{
    public: 
     virtual void show(){
        cout<<"parent class";
     } 
};

class child : public parent{
    public: 
     void show() override{
        cout<<"child class"<<endl;
     }
};

int main(){
    parent* p;
    child c;
    parent x;
    p=&c;
    p->show();
    
  p=&x;
  p->show();
}