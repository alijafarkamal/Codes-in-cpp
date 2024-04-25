#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<stdlib.h>
#include<cmath>
using namespace std; 
int main() {
	cout << "***************** HOURGLASS *****************\n";

	int n, m;
	char x;
label:
	cout << "Enter total time \n";
	cin >> n;
	cout << "Enter elapsed time \n";
	cin >> m;
	cout << "Enter character to represent sand \n ";
	cin >> x;
	int q = n - m;

	if (n >= 0 && m >= 0) {
			for (int i = 1; i <= n + 2; i++)
			{
				if (i == 1)//first line execution
				{
					for (int j = 0; j <= n + n; j++)
					{
						cout << "-";
					}
					cout << endl;
				}
				if (i < n + 2 && i >= 2)//spaces print
				{
					if (i >= 3) {
						for (int j = 3; j <= i; j++) {
							cout << " ";
						}
					}
					cout << "\\";
					if (m == 0) //if elapsed time is zero
					{
						for (int j = n + n + 2 - (i * 2); j >= 0; j--) {
							cout << x;
						}
						//Sleep(1000);
						cout << "/";

						cout << endl;
					}

					if (m != 0) //if elapsed time is not zero
					{


						for (int i = 1; i <= m; i++) {


							for (int j = n + n - (i * 2); j >= 0; j--) {
								cout << " ";
							}
							cout << "/";
							//i++;
							cout << endl;
							for (int j = 1; j <= i; j++) {
								cout << " ";
							}
							cout << "\\";
							//

						}
						for (int i = m + 1; i <= n; i++) {

							for (int j = n + n - (i * 2); j >= 0; j--) {
								cout << x;
							}

							cout << "/";
							cout << endl;

							m++;
							if (i < n) {
								for (int j = 1; j <= i; j++) {
									cout << " ";
								}
								cout << "\\";
							}


						}
						break;
					}
				}
			}


			for (int k = 1; k <= n; k++) {
				if (k <= q) {//Empty portion

					for (int j = n - k; j >= 1; j--) {
						cout << " ";
					}
					cout << "/";
					for (int j = 1; j <= k * 2 - 1; j++) {
						cout << " ";
					
					}
					for (int j = 1; j <= k * 2 - 1; j++) {
						cout <<x;
						//Sleep(1000);
					}
					cout << "\\";
					cout << endl;

				}
				if (k > q) {//sand filled portion
					for (int j = n; j > k; j--) {
						cout << " ";
					}
					cout << "/";
					for (int j = 1; j <= k * 2 - 1; j++) {
						
						cout << x;
						
					}
					
					cout << "\\";
					
					cout << endl;

				}

			}
			for (int j = 0; j <= n + n; j++) {
				cout << "-";
				
			}
			cout << endl;
			
		
	
	}
	else{
	 cout<<"Error! Please enter correct input. \n";
	goto label;
	}
	system("pause");
	return 0;

}