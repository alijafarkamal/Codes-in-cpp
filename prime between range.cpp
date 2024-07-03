# include <iostream> 
using namespace std;
int main()
{
	int first, last;
	cout << "Enter first number : \n";
	cin >> first;

	cout << "Enter last number : \n";
	cin >> last;

	
	for (int i = first; i <=last; i++)
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			else if (i == j + 1)
				cout << i << " ";
		}
	return 0;
}