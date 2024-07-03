#include<iostream>
using namespace std;
int main()
{
    cout << "Code" << "    Meal" << "            Per kg Price in Pakistani rupees \n";
    cout << "1" << "      Chicken Handi " << "   1800 \n";
    cout << "2" << "      Chicken Karahi " << "  2000 \n";
    cout << "3" << "      Chicken Tikka " << "   2200 \n";
    cout << "4" << "      Chicken Haleem " << "  500 \n";
    cout << "5" << "      Creamy Chicken " << "  2500 \n";
    cout << "********************* \n";
    int x;
    cout << "Enter your choice : \n";
    cin >> x;
    if (x >= 1 && x <= 5) {
        int quantity;
        if (x == 1) {
            cout << "Enter quantity in kgs : \n";
         
            if (quantity > 0) {
                cin >> quantity;
            }
            else {
                cout << "Error! ";
            }
        }
        if (x == 2) {
            cout << "Enter quantity in kgs : \n";
            if (quantity > 0) {
                cin >> quantity;
            }
            else {
                cout << "Error! ";
            }
        }
        if (x == 3) {
            cout << "Enter quantity in kgs : \n";
            if (quantity > 0) {
                cin >> quantity;
            }
            else {
                cout << "Error! ";
            }
        }
        if (x == 4) {
            cout << "Enter quantity in kgs : \n";
            if (quantity > 0) {
                cin >> quantity;
            }
            else {
                cout << "Error! ";
            }
        }
        if (x == 5) {
            cout << "Enter quantity in kgs : \n";
            if (quantity > 0) {
                cin >> quantity;
            }
            else {
                cout << "Error! ";
            }
        }

    }
    else {
        cout << "Error! ";
    }


    system("pause");
    return 0;
}