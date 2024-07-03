
#include<iostream> 
using namespace std;
int main()
{
	int x;
	cin >> x;
	int addition = 0;
	//do 
	while (x > 0)
	{
		x /= 10;
		addition += x % 10;
		
	} 
	//while (x > 0);
	cout << addition;
	//int sum = 0;
	//do
	//{
	//	sum = sum + num % 10; //extract the last digit
	//	//and add it to sum
	//	num = num / 10; //remove the last digit
	//} while (num > 0);
	//cout << sum;
	/*int i = 0;
	while (i <= 20)
	{
		cout << i << " ";
		i = i + 5;
	}*/
	//int number;
	//for (int counter = 1; counter <= 20; counter++)
	//{
	//	cout << "Enter number : ";
	//	cin >> number;

	//	switch (number % 2) // check the remainder
	//	{
	//	case 0:
	//		i
	//		if (number == 0)
	//			increment zero count;
	//		break;
	//	
	//			5
	//	case 1:
	//	case –1:
	//		increment odd count;
		//end switch
	//end for
	
	
	
	
	
	
	/*int x;
	cin >> x;
	int sum = 0;
	int i = 0;
	while (i <= x) {
	
		sum += i;
		i++;
	}
	cout << sum;*/



	/*int difference = 0;
	for (int i = 1; i <= 5; i++)
	{
		int j = 5;
		j++;
		int newNum;
		cout << "Enter "<<j<< "th number : \n";
		cin >>  newNum;
		difference = difference + newNum;
	}
	int average = difference / 5;
	cout << "The sum is " << difference << endl;
	cout << "The average is " << average << endl;*/

	system("pause");
	return 0;

}