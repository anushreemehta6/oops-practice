#include<iostream>
using namespace std; 
class sample{
    private:
     const double pi = 3.14;
     int radius;
    public: 
     const void  area (int radius){
        cout<<"the area is "<< 2*pi*radius<<endl;
    }
    
};
int main(){
    sample s;
    s.area(2);
}