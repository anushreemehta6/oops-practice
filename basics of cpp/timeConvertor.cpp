
//•	Write a program to convert a given number of seconds into hours, minutes, and seconds. Input the total number of seconds, and display the result in the format "HH:MM
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double sec;
    cout<<"enter the time in seconds ";
    cin>>sec;
    // to convert in to hours 
    double h; 
    h= sec/3600;
    cout<<"the convertion from second to hour is: "<<h<<endl;
    // to convert to minutes 
    double m;
    m= sec/60;
    cout<<"the convertion from second to minute is: "<<m<<endl;
    // display in the formate HH:MM;

    cout<<"the time is : "<<setw(2)<<setfill('0')<<h<<"::"<<m;
}