#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	int n, o, p, q, r;
	cout << "Enter first three digit number : \n";
	cin >> a;
	cout<< "Enter second three digit number : \n";
	cin >> n;
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	if (b <= c && b < d) e = b;
	else if (c <= b && c < d) e = c;
	else e = d;
	o = n % 10;
	p = (n / 10) % 10;
    q = n / 100;
	if (o >= p && b > q) r = o;
	else if (p >= o && p > q) r = p;
	else r = q;
	cout << "Addition of two numbers is " << e + r ;

	system("pause");
	return 0;
}