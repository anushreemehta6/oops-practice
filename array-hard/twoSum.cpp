#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,5,6,8,11};
    int target =10;

    sort(v.begin(),v.end());
    // 2,5,6,8,11

    int e = v.size()-1;
    int s = 0;
    
    while(s<=e){
        int sum = v[s]+v[e];
        if(sum == target){
            cout<<"yes";
            return 0;
        }
        else if(sum> target){
            e--;
        }
        else{
            s++;
        }

    }
    cout<<"no";
    


}