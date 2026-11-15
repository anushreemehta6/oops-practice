#include<iostream>
using namespace std;
int main(){
    // keep in mind the array out of bond - when checking for the next term - in the last it can check to the garbage value too. 
    // int n[5] = {5,2,3,5,6};
     int n[5] = {1,2,3,4,5};
    for(int i=0;i<4;i++){
        if(n[i] > n[i+1]){
            cout<<"not sorted";
            return -1;
        }
    }
    cout<<"sorted";
    return 0;
}