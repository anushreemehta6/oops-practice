#include<iostream>
#include<set>
using namespace std;
int main(){
    int n[8] = {1,1,1,2,2,3,3,3};

    set<int> st;
    for(int i=0;i<8;i++){
        st.insert(n[i]);
    }

    int index = 0;
    for(auto it: st){
        n[index] = it;
        index++;
    }

    for(int i=0;i<8;i++){
        if(i >= st.size()){
            n[i]  =0;
        }
         cout<<n[i]<<" ";
    }



}