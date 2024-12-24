#include<iostream>
using namespace std;
int main(){
    int num1 , num2, ope ;
    cout<<"enter the number 1 :"<<endl;
    cin>>num1;
    cout<<"enter the number 2 :"<<endl;
    cin>> num2;

    while(1){
        cout<<"enter the operator"<<endl;
        cout<<" -operation menu-"<<endl;
        cout<<" 1- addition \n 2 - subtraction \n 3- multiply \n 4- division \n 5- remainder"<<endl;
        cin>>ope;

        switch (ope)
        {
        case 1:
            cout<< num1 +num2 <<endl;
            break;
        case 2:
             cout<< num1-num2 <<endl;
             break;
        case 3:
            cout<< num1*num2 <<endl;
            break;
        case 4 : 
             cout<< num1/num2 <<endl;
        case 5: 
             cout<< num1%num2 <<endl;
        default:
             cout<< "invaid operator choosen "<<endl;
            break;
        }
        
    }
    return 0;
}