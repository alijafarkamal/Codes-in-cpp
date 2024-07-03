#include <iostream>
using namespace std;
int main() {
    int n, d = 2;
    while (true)
    {
        cin >> n;
        d = 2;
        if (n < 2) {
            cout << "Not prime" << endl;
        }
        else if (n == 2)
        {
            cout << "prime" << endl;
        }
        while (d < n)
        {
            if (n % d == 0)
            {
                cout << "Not prime" << endl;
                break;
            }
            d++;
        }
        if (n == d)
        {
            cout << "Prime" << endl;
        }
        return 0;
    }