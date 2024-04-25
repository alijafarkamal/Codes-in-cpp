#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int limit = 1;
    cout << "The factors of the number are ";
    while (limit <= num/2)
    {
        if (num % limit == 0) {
            cout << limit << " ";
        }
        ++limit;
    }
    return 0;
}
