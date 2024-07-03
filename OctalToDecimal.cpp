#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int decimal(int n1) {
	int x = 0;
	int y = 1;
	while (n1 > 0) {
		int rem = n1 % 10;
		x += y * rem;
		y *= 8;
		n1 /= 10;

	}

	return x;
}

int main() {
	int num;
	cin >> num;
	cout << decimal(num);
    system("pause");
    return 0;
}