#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,1,0,0,0,1,1,1,0,0,1};

    int count =0;
    int maxi=0;

    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            count++;
            maxi = max(maxi,count);

        }
        else{
            count =0;
        }
        
    }
    cout<<maxi;
}