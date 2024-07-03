// void seeCarpet(char arr[][8], int row, int col, int rows, int cols) {
//     int front = 0;
//     int left = 0;
//     int right = 0;
//     int back = 0;
//     for (int i = 0; i < col; i++) {
//         if (arr[row][i] == 'd') {
//             left++;
//        }
//     }
//     cout << "Left has " << left << " dirty blocks \n";
//     for (int i = col+1; i < cols; i++) {
//         if (arr[row][i] == 'd') {
//             right++;
//         }
//     }
//     cout << "Right has " << right << " dirty blocks \n";
//     for (int i = 0; i < row; i++) {
//         if (arr[i][col] == 'd') {
//             front++;
//         }
//     }
//     cout << "Front has " << front << " dirty blocks \n";
//     for (int i = row+1; i < rows; i++) {
//         if (arr[i][col] == 'd') {
//             back++;
//         }
//     }
//     cout << "Back has " << back << " dirty blocks \n";

// }
// int main() {
//     const int rows = 8;
//     const int cols = 8;
//     char arr[rows][cols];
//     ifstream file("carpet.txt");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             file >> arr[i][j];
//         }
//     }
//     cout << "Enter row 0 to 7 \n";
//     int row; cin >> row;
//     cout << "Enter column 0 to 7\n";
//     int col; cin >> col;
//     arr[row][col] = '*';
//     seeCarpet(arr, row, col, rows, cols);