#include <iostream>
//<iomanip>
//#include<conio.h>
using namespace std;
int main()
{
	int num = 7;
	int usernum;
	int tries = 3;
	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		cout << "\n********Game Start**********";

		tries = 3;
		while (tries > 0)
		{

			cout << "Guess a number : \n";
			cin >> tries;
			cin >> usernum;
			if (num == usernum)
			{
				cout << "You won \n";
			}
			else if (num < usernum)
			{
				tries--;
				cout << "Please guess a smaller number \n";

			}
			else
			{
				tries--;
				if (num != 0)
					cout << "Please guess a larger number \n";
			}
		}
		if (usernum == 0)
		{ 
			cout << "you lost \n";
	    }
		cout << "Do you want to play again(y/n)?";
		cin >> choice;
		return 0;
	}