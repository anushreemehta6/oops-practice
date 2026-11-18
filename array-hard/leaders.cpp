#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,22,12,3,0,6};
    vector<int> leaders ;

    int count=0;
    int temp =0;
    for(int i=0;i<v.size();i++){
        temp = v[i];
        int j=i+1;
        int flag =1;
        while(j<v.size()){
            if(temp<v[j]){
                flag =0;
                break;
            }
            j++;

        }

        if(flag == 1){
            leaders.push_back(temp);
        }
        
        
    }

    for(int x : leaders) {
        cout << x << " ";
    }
}