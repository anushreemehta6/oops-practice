// Develop a C++ program that takes a user’s date of
// birth as input and calculates their current age based
// on the current date
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter your birth year "<< endl;
    cin>>year;
    int count =0;
    int currentYear = 2024;
    if(year > currentYear){
        cout<<"the date is in future"<<endl;
    }
    else{
        for(int i = year; i<currentYear; i++){
         count++;
        }
    }
    cout<<"the current age is "<< count;
}