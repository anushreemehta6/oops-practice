// Create a C++ program that accepts multiple
// numbers from the user, stores them in an array, and
// calculates and displays the sum, average.

#include<iostream>
using namespace std;
int main(){
  int arr[5];
  cout<<"enter the elements in array"<<endl;
  for(int i = 0;i<5;i++){
    cin>>arr[i];
  }
  cout<<"displaying sum of the elements"<<endl;
  int sum =0;
  for(int i=0;i<5;i++){
    sum= sum +arr[i];
    
  }
  cout<<"sum is "<<sum <<endl;
  cout<<"the average of the array is "<< sum / 5;

}