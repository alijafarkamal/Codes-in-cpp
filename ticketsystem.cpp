#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int age;
    cout << "Enter age : \n";
    cin >> age;
    int y, Y, d{}, p;
    y = 80;
    Y = 100;
    if (age <= 10)
    {
        if (age <= 6) d = 40;
        else d = 25;
        p = y - ((d / 100.0) * y);
        cout << p ;
    }
    else if (age == 11 || age == 12) cout << y;
    else if (age > 12 && age <= 50)
        cout << Y;
    else if (age > 50) {
        if (age <= 60)
            d = 15;
        else if (age > 60)
            d = 50;
        p = Y - ((d / 100.0) * Y);
        cout << p;
    }



     system ("pause");
    return 0;
} 