// const int N = 8; // Chessboard size

// // Function to check if the move is valid
// bool isSafe(int x, int y, int sol[N][N]) {
//     return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
// }

// // Function to print the solution matrix
// void printSolution(int sol[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << sol[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // Function to solve the Knight's tour problem using backtracking
// bool solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]) {
//     int k, next_x, next_y;
//     if (movei == N * N)
//         return true;

//     // Try all next moves from the current coordinate
//     for (k = 0; k < 8; k++) {
//         next_x = x + xMove[k];
//         next_y = y + yMove[k];
//         if (isSafe(next_x, next_y, sol)) {
//             sol[next_x][next_y] = movei;
//             if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove))
//                 return true;
//             else
//                 sol[next_x][next_y] = -1; // backtracking
//         }
//     }

//     return false;
// }

// // Function to solve the Knight's tour problem
// void solveKT() {
//     int sol[N][N];
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             sol[i][j] = -1;

//     // xMove[] and yMove[] define the next move of the knight
//     int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
//     int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

//     // Starting from the top-left corner
//     sol[0][0] = 0;

//     if (solveKTUtil(0, 0, 1, sol, xMove, yMove))
//         printSolution(sol);
//     else
//         cout << "Solution does not exist" << endl;
// }

// int main() {
//     solveKT();
