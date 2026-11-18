#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={3,2,3};
    sort(v.begin(),v.end());
    int n = v.size();

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }

    for(auto it :mpp){
        if(it.second > n/2){
            cout<<it.first;
            return 0;
        }
    }
}