#include <iostream>
using namespace std;

int main() {
    int n = 9876;
    int temp = 0;
    while (n != 0) {
        int lastdigit = n % 10;
        n = n / 10;
        temp = temp * 10 + lastdigit;
    }

    cout << temp;
}