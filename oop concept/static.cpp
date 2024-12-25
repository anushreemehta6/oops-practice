#include<iostream>
using namespace std;
class sample{
    public: 
      static int count;
      sample(){
        count++;
      }
      void display(){
        cout<<"the display is "<< count<<endl;
      }
      
};
int sample :: count = 0;
int main(){
     sample a1,a2;
     a1.display();
}
