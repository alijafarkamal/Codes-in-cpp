#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y && y > z && x > z) {
        cout << "Descending order : " << x << "," << y << "," << z << endl
             << "Ascending order : " << z << "," << y << "," << x;
    }
    else if (y > x && y > z && x > z) {
        cout << "Descending order : " << y << "," << x << "," << z << endl
             << "Ascending order : " << z << "," << x << "," << y;
    }
    else if (z > x && z > y && x > y) {
        cout << "Descending order : " << z << "," << x << "," << y << endl
            << "Ascending order : " << y << "," << x << "," << z;
    }
    else if (x > y && y > z && z > y) {
        cout << "Descending order : " << x << "," << z << "," << y << endl
             << "Ascending order : " << y << "," << z << "," << x;
    }
    else if (y > x && y > z && z > x) {
        cout << "Descending order : " << y << "," << z << "," << x << endl
            << "Ascending order : " << x << "," << z << "," << y;
    }
    else if (z > x && z > y && y > x) {
        cout << "Descending order : " << z << "," << y << "," << x << endl
            << "Ascending order : " << x << "," << y << "," << z;
    }
    else  if (x > y && z > y && x > z) {
        cout << "Descending order : " << x << "," << z << "," << y << endl
            << "Ascending order : " << y << "," << z << "," << x;
    }
    else if (y > x && y > z && x > z) {
        cout << "Descending order : " << y << "," << x << "," << z << endl
            << "Ascending order : " << z << "," << x << "," << y;
    }
    else if (z > x && y > z && x > y) {
        cout << "Descending order : " << z << "," << x << "," << y << endl
            << "Ascending order : " << y << "," << x << "," << z;
    }


    system("pause");
    return 0;
}
