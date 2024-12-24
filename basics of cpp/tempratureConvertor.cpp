// Write a C++ program that converts
// temperature between Celsius and Fahrenheit based
// on the user’s choice. The program should validate
// the input to ensure temperatures are realistic (e.g.,
// no values below absolute zero, -273.15°C or
// -459.67°F)

#include <iostream>
using namespace std;
int main()
{
    int ope;
    float temp, tempCEL, tempFER;
    cout << "--operation menu -- \n 1. convert fahrenhiet to celsius \n 2. convert celsius to fahrenhiet." << endl;
    cout << "enter the choice" << endl;
    cin >> ope;
    switch (ope)
    {
    case 1:

        cout << "enter the temprature in fahrenhiet" << endl;
        cin >> temp;
        if (temp < -459)
        {
            cout << "invaild temprature ";
        }
        else
        {

            tempCEL = (temp - 32) / 1.8;
            cout << " the given temprature in celsius is : " << tempCEL << endl;
        }

        break;
    case 2:
        cout << "enter the temprature in celsius" << endl;
        cin >> temp;
        if (temp < -273)
        {
            cout << "invaild temprature ";
        }
        else
        {
            tempFER = (temp * 1.8) + 32;
            cout << " the given temprature in fahrenhiet is : " << tempFER << endl;
        }

        break;

    default:
        cout << "invalide operation";
        break;
    }
}