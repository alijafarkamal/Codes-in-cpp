// nt main() {
// 		cout << "Enter input of 1st matrix: \n";
// 	const int row1 = 3;
// 	const int col1 = 4;
// 	int arr1[row1][col1]= {
// 		{1, 2, 3, 4},
// 		{5, 6, 7, 8},
// 		{9, 10, 11, 12}
// 	};

// 	cout << "Enter input of 2nd matrix: \n";
// 	const int row2 = 4;
// 	const int col2 = 5;
// 	int arr2[row2][col2] = {
// 		{1, 2, 3, 4, 5},
// 		{6, 7, 8, 9, 10},
// 		{11, 12, 13, 14, 15},
// 		{16, 17, 18, 19, 20}
// 	};

// 	int arr3[row1][col2];
// 	cout << "Multiplication matrix is : \n"; 
// 	for (int i = 0; i < row1; i++)
// 		for (int j = 0; j < col2; j++) {
// 			arr3[i][j] = 0;
// 			for (int k = 0; k < col1; k++)
// 				arr3[i][j] += arr1[i][k] * arr2[k][j];
// 		}
// 	for (int i = 0; i < row1; i++){
// 		for (int j = 0; j < col2; j++) {
// 			cout << setw(4) << arr3[i][j];
// 		}
// 	cout << endl;
// }