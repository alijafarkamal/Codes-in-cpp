// const int rows = 4;
// const int columns = 4;
// int array[rows][columns] = {
// 	{16, 15, 14, 13},
// 	{12, 11, 10, 9},
// 	{8, 7, 6, 5},
// 	{4, 3, 2, 1}
// };
// for (int i = 0; i < rows; i++)
// {
// 	for (int j = 0; j < columns; j++)
// 	{
// 		for (int k = 0; k < columns - 1; k++)
// 		{
// 			if (array[i][k] > array[i][k+1])
// 			{
// 				int temp = array[i][k];
// 				array[i][k] = array[i][k + 1];
// 				array[i][k + 1] = temp;
// 			}
// 		}
// 	}
// }

// //sort columns
// for (int j = 0; j < columns; j++)
// {
// 	for (int i = 0; i < rows; i++)
// 	{
// 		for (int k = 0; k < rows - 1; k++)
// 		{
// 			if (array[k + 1][j] < array[k][j])
// 			{
// 				int temp = array[k][j];
// 				array[k][j] = array[k + 1][j];
// 				array[k + 1][j] = temp;
// 			}
// 		}
// 	}
// }
// for (int j = 0; j < columns; j++)
// {
// 	for (int i = 0; i < rows; i++)
// 	{
// 		cout << array[j][i] << " ";
// 	}
// 	cout << endl;
// }