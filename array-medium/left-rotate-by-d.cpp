#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    int d = 2;

    // reverse the d elements- 
    int s1 = 0;
    int e1 = d-1;
    while(s1<=e1){
        swap(v[s1],v[e1]);
        s1++;
        e1--;
    }

    //reverse the remaining-
    int s2 = d;
    int e2 = v.size()-1;

    while(s2<=e2){
        swap(v[s2],v[e2]);
        s2++;
        e2--;
    }

    //reverse the whole-

    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}