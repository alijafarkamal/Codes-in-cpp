#include <iostream> 
using namespace std;
int main()
{
	int m = 0; // each student
	int n = 0; //total students
	cout << "Enter number of boxes of each student : \n";
	cin >> m;
	while (m > 0) {
		n += m;
		cout << "Enter no.of boxes of next student : ";
		cin >> m;
	}
	int o ;
	int p ;
	cout << "Enter price of each box : \n";
	cin >> o;
	p = n*o;
	int q;
	int r;
	cout << "Enter total no.of students : ";
	cin >> q;
	r = n / q;
	cout << "Total no.of boxes sold = " << n
		<< "\nTotal revenue generated = " << p
		<< "\nAverage = " << r;

	system("pause");
	return 0;

}