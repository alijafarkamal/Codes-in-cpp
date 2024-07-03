#include<iostream>
using namespace std;
int main()
{
	int num;
cout << "Enter a number : \n";
cin >> num;
int min = 0;
int max = 0;


while (num >= 0) {
	cout << num << " ";
	cout << "Enter a number : \n";
	cin >> num;
	if (num > max)
	{
		max = num;
	}

	if (num != 0)
	{
		min = num;
		if (num <min)
			min = num;;
	}
}

cout << "Maximum number is " << max;
cout << "Minimum number is " << min;
return 0;
}