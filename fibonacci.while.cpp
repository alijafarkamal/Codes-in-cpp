#include <iostream> 
using namespace std;
int main()
{
    int first = 0;
    int second = 1;
    int sum = 0;
    int input = 0;
    cout << "Enter a number : \n";
    cin >> input;
    cout << "Fibonacci series upto given point according to input is : " << "\n" << first << "," << second << ",";
    sum = first + second;
    while (sum <= input)
    {
        cout << sum << " \n";
        first = second;
        second = sum;
        sum = first + second;
    }

    
    cout << endl;
    system("pause");
    return 0;
}