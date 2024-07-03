#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int fact = 1;

	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	cout << fact;
	for (int j = num; j >= 1; j--)
	{
		cout << j << "*";
	}
return 0;
}
