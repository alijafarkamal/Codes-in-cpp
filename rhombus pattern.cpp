

 #include <iostream>
 //#include<iomanip>
 //#include<conio.h>
 using namespace std;
 int main() {
	 int n;
	 cin >> n;

	 for (int i = 1; i <= n; i++) {
		 for (int k = n-i; k >= 1; k--) {
			 cout << " ";
		 }
		 for (int j = 1; j <= i * 2 - 1; j++) {
			 cout << "*";
		 }
		 for (int k = n-i; k >= 1; k--) {
			 cout << " ";
		 }

		 cout << endl;
	 }
	 for (int i = 1; i <= n - 1; i++) {
		 for (int k = n-i; k <= n-1; k++) {
			 cout << " ";
		 }
		 for (int j = (n-i)*2-1; j >= 1; j--) {
			 cout << "*";
		 }
		 cout << endl;
		 //for()
	 }
     return 0;
 }
 	//  int r, c;
	//  cout << "Enter number of rows : ";
	//  cin >> r;
	//  cout << "Enter number of columns : ";
	//  cin >> c;
	//  for (int i = 1; i <= r; i++) {
	// 	 for (int m = r-1 ; m >= 1 && i<2; m--)
	// 	 {
	// 		 cout << "  ";
	// 	 }
	// 	 for (int j = 1; j <= c; j++)
	// 	 {
	// 		 while (i >= 2 && i < r) 
	// 		 {
	// 			 for (int m = r - i; m >= 1; m--) 
	// 			 {
	// 				 cout << "  ";
	// 			 }
	// 			 for (int l = 1; l <= (c - (c - 1)); l++)
	// 			 {
	// 				 cout << "* ";
	// 			 }
	// 			 for (int k = 1; k <= c - 2; k++) {
	// 				 cout << "  ";
	// 			 }
	// 			 for (int l = 1; l <= (c - (c - 1)); l++)
	// 			 {
	// 				 cout << "* ";
	// 			 }
	// 			 i++;
	// 			 cout << endl;
	// 		 }
	// 		 cout << "* ";
	// 	 }
	// 	 cout << endl;