#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int c;
    if (x > 9 && x < 36) {
        c = x + 55;
        cout << static_cast<char>(c);
    }


    system("pause");
    return 0;
}
