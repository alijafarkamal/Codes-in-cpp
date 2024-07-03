#include <iostream>
#include<iomanip>
using namespace std;
int main() {
const int m = 7;
const int n = 7;
int arr[m][n];


int count = 0;
int row_start = 0, column_end = m-1, row_end = n-1, column_Start = 0;
int total = m * n;

while (count<=total)
{
	for (int i = column_Start; i <= column_end && count <= total; i++) {
		arr[row_start][i] = count++;
	}
	row_start++;

	for (int i = row_start; i <= row_end && count <= total; i++) {
		arr[i][column_end] = count++;
	}
	column_end--;

	for (int i = column_end; i >= column_Start && count <= total; i--) {
		arr[row_end][i] = count++;
	}
	row_end--;
	for (int i = row_end; i >= row_start && count <= total; i--) {
		arr[i][column_Start] = count++;
	}
	column_Start++;
}
for (int i = 0; i < 7; i++) 
{
	for (int j = 0; j < 7; j++) {
		cout << setw(3) << arr[i][j];
	}
	cout << endl;
}

    return 0;
}

    // while (minr <= maxr && minc <= maxc && index <= rows * cols)
    // {
    //     for (int i = minc; i <= maxc; i++)
    //     {
    //         matrix[minr][i] = index++;
    //     }
    //     minr++;

    //     for (int i = minr; i <= maxr; i++)
    //     {
    //         matrix[i][maxc] = index++;
    //     }
    //     maxc--;

    //     for (int i = maxc; i >= minc; i--)
    //     {
    //         matrix[maxr][i] = index++;
    //     }
    //     maxr--;

    //     for (int i = maxr; i >= minr; i--)
    //     {
    //         matrix[i][minc] = index++;
    //     }
    //     minc++;
    // }
	//     while (minr <= maxr && minc <= maxc && index <= rows * cols)
    // {
    //     for (int i = minr; i <= maxr; i++)
    //     {
    //         matrix[i][minc] = index++;
    //     }
    //     minc++;

    //     for (int i = minc; i <= maxc; i++)
    //     {
    //         matrix[maxr][i] = index++;
    //     }
    //     maxr--;

    //     for (int i = maxr; i >= minr; i--)
    //     {
    //         matrix[i][maxc] = index++;
    //     }
    //     maxc--;
    //     for (int i = maxc; i >= minc; i--)
    //     {
    //         matrix[minr][i] = index++;
    //     }
    //     minr++;
    // }