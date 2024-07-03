// #define N 4
// void fun1(int mat[][N])
// {
// 	for (int x = 0; x < N / 2; x++) {
// 		for (int y = x; y < N - x - 1; y++) {
// 			int temp = mat[x][y];
// 			mat[x][y] = mat[y][N - 1 - x];
// 			mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
// 			mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
// 			mat[N - 1 - y][x] = temp;
// 		}
// 	}
// }
// void fun2(int mat[N][N])
// {
// 	for (int i = 0; i < N; i += 1) {
// 		for (int j = 0; j < N; j++) {
// 			cout << mat[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// 	cout << endl;
// }
// int main()
// {
// 	int mat[N][N] = { { 1, 2, 3, 4 },
// 	                  { 5, 6, 7, 8 },
//                       { 9, 10, 11, 12 },
//                       { 13, 14, 15, 16 } };
// 	fun1(mat);
// 	fun2(mat);