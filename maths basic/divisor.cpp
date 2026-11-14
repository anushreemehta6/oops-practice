#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter number n";
    cin >> n;

    vector<int> div;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
    }

    for (int i = 0; i < div.size(); i++)
    {
        cout << div[i] << " ";
    }
}