#include <iostream>
using namespace std;

int main() {

    int n = 1;
    int a = 0;
    while (n > 0)
    {
            cout << "Enter a number : \n";
            cin >> n;
            if (n > a)
                a = n;
    }
    cout << "Greatest number is " << a;

    system("pause");
    return 0;

}#include<iostream>
using namespace std;
int main()
{
	/*int num;
	cin >> num;
	int rem = num % 10;
	int quo = num / 10;
	int num1 = quo % 10;*/
	int n, i;
	cout << "Enter the number to convert: ";
	cin >> n;
	for (i = 0; n > 0; i++)
	{
		a = n % 2;
		n = n / 2;
	}
	cout << "Binary of the given number= ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << a;
	}
	return 0;






}