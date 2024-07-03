#include <iostream>
#include <iomanip>
using namespace std;
#define rows 6
#define cols 6
#define rows1 3
#define cols1 3
void finder(int matrix[][cols], int arr[][3]) {
	int row = 0;
	int col = 0;
	bool isMatched = true;
	int l = 0;
	int k = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (matrix[i][j] == arr[row][col]) {
				for (k = i, row = 0; k < rows1+i; row++, k++) {
					for (l = j+1, col = 1; l < cols1+j; col++, l++) {
						if (matrix[k][l] != arr[row][col]) { isMatched = false; break; }
						//else { isMatched = true; }
					}
					if (isMatched ) {
						cout << "Matrix pattern found at (" << k << "," << l-j-1 << ")\n";
						break;
					}
				}
				
			}
		}
	}
    
}
int main() {
	int  matrix [rows][cols] = {
	   {1, 2, 7, 8, 9, 6},
	   {2, 2, 3, 4, 5, 6},
	   {3, 2, 3, 4, 5, 6},
	   {4, 2, 3, 4, 5, 6},
	   {5, 2, 9, 8, 7, 6},
	   {6, 2, 7, 4, 5, 6}
	};
	
	int arr[3][3] = { {3,4,5}, {3,4,5}, {3,4,5} };
	finder(matrix, arr);
	system("pause");
	return 0;
}