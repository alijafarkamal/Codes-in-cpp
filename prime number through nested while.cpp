#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int div = 2;

	while (num >= div) {
	     if (num == div) {
			cout << "Prime. \n";
			break;
		}
		else if (num % div == 0) {
			cout << "Not prime. \n";
			break;
		}
		
		div += 1;
	}
    return 0;
}