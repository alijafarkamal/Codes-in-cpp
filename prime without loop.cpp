#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num <= 1) cout << "Not prime. \n";
    else if (num == 2) cout << "Prime. \n";
    int i = 3;
label:
    if (num % i != 0)
    {
        i = i + 2;
        if (i == num / 2 || i < num/2 )
            goto label;
        cout << "Prime. ";

    }
    else cout << "Not prime";

    system("pause");
    return 0;
}
	//	/*
	//int num;
	//int a = 2;
	//cout << "Enter a number : \n";
	//cin >> num;
	//if (num >= 2)
	//{
	//label_b:
	//		if (num % a == 0) {
	//			if (num > a)
	//			{
	//				cout << num << " is not a prime number. \n";
	//				goto label_c;
	//			}
	//			else cout << num << " is a prime number. \n";
	//		}
	//		a++;
	//goto label_b;
	//}
	//	label_c:*/
	//	return 0;
	//}
	
	// cout << "Enter a number: ";
	// cin >> num;
	// 	if ( num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
	// 		cout << "Not prime";
	// 	}
	// 	else {
	// 		cout << "Prime ";
	// 	}