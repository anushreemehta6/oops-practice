#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {1,2,-4,-5};          // output = arr1 = {1,-4,2,-5}
    
    vector<int> pos ={0};
    vector<int> neg={0};

    for(int i=0;i<arr1.size()-1;i++){
        if(arr1[i]>=0){
            pos.push_back(arr1[i]);
        }
        else{
            neg.push_back(arr1[i]);
        }
    }

    for(int i=1;i<(arr1.size()-1);i++){
        if(i%2==0){
            arr1[i] = pos[i];
        }
        else{
            arr1[i]= neg[i];
        }
    }
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
}