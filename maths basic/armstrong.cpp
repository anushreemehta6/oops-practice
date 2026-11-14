#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cout << "enter number";
    cin >> n;

    int newN = n;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    n = newN;
    
    int armN = 0;

    while(n!=0){
        int digit = n%10;
        armN = armN + pow(digit,count);
        n = n/10;
    }

    if(newN == armN){
        cout<<"Armstrom number";
    }
    else{
        cout<<"not a armstrong number";
    }

}