#include<iostream> 
//#include<iomanip>
using namespace std;
int main()
{
	int first = 0;
	int second = 1;
	int sum = 1;
	int third = 1;
	while (sum <= 10) {
		cout << second << " /"<< third <<endl;
		sum++;
		second = sum ;
		third = first + 1;
		first++;

	}
	cout << endl;

return 0;
}