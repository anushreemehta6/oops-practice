
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 6};
    int n = v.size();
    // 1. linear search
    // for (int i = 1; i <= v.size()+1; i++)
    // {
    //     int flag = 0;
    //     for(int j=0;j<v.size();j++){
    //         if(v[j]==i){
    //             flag =1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         cout<<i;
    //     }
    // }


    //2. hashing 
    // vector<int> hash(v.size()+1,0);
    // for(int i=0;i<v.size();i++){
    //     hash[v[i]]=1;

    // }

    // for(int i=1;i<hash.size();i++){
    //     if(hash[i]==0){
    //         cout<<i;
    //         break;
    //     }
    // }


    //sum approach 

    int largest = v[0];
    for(int i=0;i<5;i++){
        if(largest<=v[i]){
            largest = v[i];
        }
    }
    int tsum = (largest*(largest+1))/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + v[i];
    }

    cout<<tsum - sum;

}