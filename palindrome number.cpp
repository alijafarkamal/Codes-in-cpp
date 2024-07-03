#include<iostream>
using namespace std;
int main() {

	int num;
	cout << "Enter a number : ";
	cin >> num;
	int num2 = num;
	int bun = 0;
	//int num1;
	while (num > 0) {
		int rem = num % 10;
		bun = bun * 10 + rem;
		num = num / 10;
	}
	cout << "Number in reverse order : " << bun << " " << endl;
	if (num2 == bun)
		cout << num2 << " is palindrome. ";
	else cout << num2 << " is not palindrome number. ";

	system("pause");
	return 0;
}