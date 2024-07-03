#include <iostream> 
using namespace std;
int main()
{
	//int a, b = 0;
	////a is the number entered 
	//// b is the sum of numbers entered 
	//cout << "Enter a number " << endl << endl << "Note: The program will terminate once a negative number is entered " << endl;
	//cin >> a;
	//while (a >= 0)
	//{
	//	b = b + a;
	//	cout << " Enter the next number " << endl;
	//	cin >> a;
	//}

	//cout << " Sum of all the numbers entered=" << b << endl;

	//cout << endl << "Negative number entered so program is terminated " << endl;
	int first = 0;
	int second =1;
	cout << "Enter a positive number. In case you enter a negative number, program will terminate. \n";
	cin >> first;
	while (first >= 0)
	{
		second *= first;
		cout << "Enter next number : ";
		cin >> first;
	}
	cout << "Multiplication = " << second << "\n";
	system("pause");
	return 0;
}