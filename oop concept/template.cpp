//template

#include<iostream>
using namespace std;
template <typename t>
class sample{
    private:
     t length;
     t width;
    public:
    sample(t length , t width){
        this->length=length;
        this->width = width;
    }
      void add(){
        cout<<"the sum is "<< length+width<<endl;
      } 

};

int main(){
    sample <int> s(10,20);
    s.add();
    sample <double> s2(11.25,20.46);
    s2.add();
}