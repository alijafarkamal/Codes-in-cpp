# include <iostream> 
using namespace std;
int main()
{
	int a;
	// a is the number 
	cout << "Enter a number" << endl;
	cin >> a;
	int b = 0;
	int g = 1;
	// b is the remainder 
	// g is the quotient
	int c = 0;
	//  c is the cube 
	int d = 0;
	//d is sum of numbers cubes
	while (g > 0)
	{
		b = a % 10;
		g = a / 10;
		a = g;
		c = pow(b, 3);
		d += c;
		cout << pow(b, 3);
		if (b > 0)
		{
			cout << "+";
		}
	}
	cout << 0 << "=" << d << endl;
	int num;
	cout << "Please enter the number again" << endl;
	cin >> num;
	if (d == num)
	{
		cout << "Number is Armstrong" << endl;
	}
	else {
		cout << "Number is not Armstrong" << endl;
	}
	system("pause");
	return 0;

}	
	