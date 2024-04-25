
#include<iostream>
using namespace std;
int main()
{   int num;
	cin >> num;
	int fact = 1;
    

	for(int i = 1; i<=num; i++)
	{
		fact *= i;
	}
	cout<<fact<<"=";
	
	while(num>1)
	{
		cout<<num--<<"* ";
	}
	cout<<1;
	
    return 0;
}
