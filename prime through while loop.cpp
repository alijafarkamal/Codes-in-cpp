#include <iostream>
using namespace std;

int main() {
    int initial, input;
    bool is_prime = true;
    cin >> input;
    if (input == 0 || input == 1)
        cout << "Invalid.\n";
    int initial = 1;
    while(initial<input)
    {
        if (input % initial == 0) {
            is_prime = false;
            initial++;
        }
    }
    if (is_prime) cout << "Prime \n";
    else cout << "Not prime. \n";
    
    return 0;
}