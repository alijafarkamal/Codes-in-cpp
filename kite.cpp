#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<stdlib.h>
#include<cmath>
using namespace std; 
int main() {
    cout << "************************* KITE **********************\n";
	int n;
	label:
	cout << "Enter height of the upper portion of the kite: \n";
	cin >> n;
	
	int l = 0;
	for (int k = 3; k < n; k++) {
		l++;
	}

	if (n == 2) {
		cout << "  * \n";
		cout <<"*-|-*\n";
		cout << " *|*\n";
		cout <<"  *\n";

	}
	if (n > 2) {
		for (int i = 1; i <= n; i++)
		{

			if (i == 1)
			{
				for (int j = 3; j <= n; j++)
				{
					cout << "  ";
				}
				cout << "  *\n";

			}

			if (i > 1 && i < n)
			{
				for (int j = n - i; j >= 1; j--) {
					cout << "  ";
				}
				cout << "*";
				for (int j = 2; j <= (i * 2 - 1) / 2; j++) {
					cout << "  ";
				}
				cout << " |";

				for (int j = 2; j <= (i * 2 - 1) / 2; j++) {
					cout << "  ";
				}

				cout << " *";
				cout << endl;
			}
			if (i == n)
			{

				cout << "*";
				for (int j = 1; j <= l + n; j++) {
					cout << "-";
				}
				cout << "|";
				for (int j = 1; j <= l + n; j++) {
					cout << "-";
				}
				cout << "*";
				cout << endl;

			}
		}
		//cout << endl;

		for (int i = 1; i <= (n - 1) * 2; i++)
		{


			if (i != (n - 1) * 2) {
				for (int j = n; j > n - i; j--) {
					cout << " ";
				}
				cout << "*";

				for (int k = l + (n - i); k >= 1; k--) {
					cout << " ";
				}
				cout << "|";
				for (int k = l + (n - i); k >= 1; k--) {
					cout << " ";
				}
				cout << "*";
			}


			if (i == (n - 1) * 2) {
				for (int k = 0; k <= n + l; k++) {
					cout << " ";
				}
				cout << "*";
				cout << endl;

				break;
			}
		
			cout << endl;
		}
	}
	else {
		cout << "Error! Please enter a valid input. \n";
		goto label;
	}

	system("pause");
	return 0;

}



