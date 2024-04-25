#include<iostream>
using namespace std;
int main()
{
	int n;
	int  x= 0;
	int y = 1;
	int z;
	cin >> n;
	while (n>=0 && x<=n)
	{
	    cout<<x<<" \n";
		z = x + y;
		x = y;
		y = z;
	}
	cout << endl;// for next number in series  use cout << x << " " << endl; and erase cout<<x<<" \n";
	system ("pause");
	return 0;
}