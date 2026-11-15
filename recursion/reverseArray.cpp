#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int rev(vector<int> n,int s,int e){
    if(n.size()==0){
        return 0;
    }

    while(s<=e){
        swap(n[s],n[e]);
        s++;
        e--;
    }

    for(int i=1;i<=n.size();i++){
        cout<<n[i]<<" ";
    }
    
}
int main(){
    vector<int> n = {1,2,3,4,5,6};
  int s =0;
  int e = n.size();
  cout<< rev(n,s,e);
 
}