#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number n";
    cin >> n;

    int newN = n;

    // first reverse it
    int temp = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        temp = temp * 10 + lastdigit;
    }

    if (temp == newN)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }

    return 0;
}