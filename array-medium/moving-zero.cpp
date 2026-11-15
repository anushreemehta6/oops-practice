
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,0,4,0,5,0,6};
    int n = v.size();

    vector<int> vt;

    for(int i = 0; i < n; i++) {
        if(v[i] != 0) {
            vt.push_back(v[i]);
        }
    }

    for(int i = vt.size(); i < n; i++) {
        vt.push_back(0);
    }

    for(int i = 0; i < n; i++) {
        cout << vt[i] << " ";
    }
}
