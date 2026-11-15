#include<iostream>
using namespace std;
int main(){
    int n[5] = {5,6,8,2,6};
    int largest = n[0];

    for(int i=0;i<5;i++){
        if(largest<=n[i]){
            largest = n[i];
        }
    }
    
    int second = -1;
     for(int i=0;i<5;i++){
        if(second<n[i] && n[i]!=largest){
             second = n[i];
        }
    }

    cout<<second;
}