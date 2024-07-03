#include<iostream>
#include<cmath>
using namespace std;

int main() {
int num;
cout << "Enter a number : \n";
cin >> num;
int rem;
int num2 = 0;

while (num>0)
{
	rem = num % 10;
	num2 = num2 * 10 + rem;
	num /= 10;
}
cout << num2;
    system("pause");
    return 0;
}