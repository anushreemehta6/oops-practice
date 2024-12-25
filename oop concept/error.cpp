#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter number a ";
    cin>>a;
    cout<<"enter number b ";
    cin>>b;

    try{
        if(b==0){
           throw("error!! division by zero");
        }
        cout<<a/b;
        
    }catch(const char* msg){
            cout<<"exception caught!"<<msg<<endl;
        }
}