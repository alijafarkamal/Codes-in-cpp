 #include <iostream>
 //#include<iomanip>
 //#include<conio.h>
 using namespace std;
 int main() {int r, c;
cout << "Enter number of rows : ";
cin >> r;
cout << "Enter number of columns : ";
cin >> c;
for (int i = 1; i <= r; i++) {
 for (int j = 1; j <= c; j++) {
	 while (i >= 2 && i < r) {
		 for (int l = 1; l <= (c - (c - 1)); l++)
		 {
			 cout << "* ";
		 }
		 for (int k = 1; k <= c - 2; k++) {
			 cout << "  ";
		 }
		 for (int l = 1; l <= (c - (c - 1)); l++)
		 {
			 cout << "* ";
		 }
		 i++;
		 cout << endl;
	 }
	 cout << "* ";
 }
 cout << endl;
}
return 0;
 }