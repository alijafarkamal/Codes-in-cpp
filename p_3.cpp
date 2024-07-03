#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   
   int a = 9, t = 0, i = 10;
    cout << "Enter a decimal value";
   cin >> t;
   
     cout << a << i << t;
    char b = 'B';
    float c = 10.6;
    cout << endl << sizeof(double);
    cout
        << "  *"
        << endl
        << "\t***" << "\\n"<< "\t*****";
     cout << a << endl << b << endl << c;

     cout << "result ="<<10 % 7 + 10 / 5 * 8 + 2 - 5;
    float result=  static_cast<float>(7) / 2;
     cout << result;

    int num1, num2, result = 0;
    char op;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter Operator(+,-,*,/): ";
    cin >> op;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num1 / num2;
    else
        cout << "Invalid operator";
   
    cout << "Result is :" << result;
     bool g = 0;
     bool f = true;
     bool d = -12;

     int x = c;
     char letter = 'A';
     cout << letter+1;
     cout << "\na= " << a
         << "\nb= " << b
         << "\nc= " << c
         << "\ng= " << g
         << "\nf= " << f
         << "\nd= " << d;
    cout << "---------------------------\n";
    cout << "\"\\t \tafter tab \\b after\b \' \"\n";
    int number = 5;
    int result= (number++) - (++number);
    cout << result;// number++ - ++number;
    cout << number;
    cout <<endl<< --number;
    number = number - 3;
    cout << number;
    number -= 1;
    cout << number;
    if (0.008)
    {
        b = 10;
        cout <<"Inside if"<< a << b++<<endl;
    }
    b = 20;

    cout <<endl <<'A' + 'B' + 'c'-'a'<<endl;
    cout << 20 + 3 * 3 / 9 + 60 << endl;
    cout << 53 % 3;
    cout <<"\n"<<setw(10)<<"\bOutside \t"<< a << ++b <<c<<x<< endl;
    system("pause");
    return 0;
}
