    // const int rows = 6;
    // const int cols = 6;

    //     // Initialize a 6x6 matrix with numbers from 1 to 36
    //     int matrix[rows][cols] = {
    //         {1,  2,  3,  4,  5,   6},
    //         {7,  8,  9,  10, 11, 12},
    //         {13, 14, 15, 16, 17, 18},
    //         {19, 20, 21, 22, 23, 24},
    //         {25, 26, 27, 28, 29, 30},
    //         {31, 32, 33, 34, 35, 36}
    //     };
    //     int min = 0;
    //     int adj = 0;
    //     bool isSaddle = false;
    //     int box;
    //     for (int i = 0; i < rows; i++) {
    //         min = matrix[i][0];
    //         for (int j = 0; j < cols; j++) {
    //             if (matrix[i][j] < min) { min = matrix[i][j]; adj = j; }
    //         }
    //         for (int k = 0; k < rows; k++) {
    //             if (min > matrix[k][adj]) {
    //                 isSaddle = true;
    //                 box = min;
    //             }
    //             else {
    //                 isSaddle = false;
    //             }
    //         }
    //     }
    //     cout << box;


//     #define ROWS 100
// #define COLS 100
// int main() {
// 	int matrix[ROWS][COLS];
// 	int rows = 0, cols = 0;
// 	cout << "How many rows do you want? ";
// 	cin >> rows;
// 	cout << "How many columns do you want? ";
// 	cin >> cols;
// 	cout << "Enter values for your matrix \n";
// 	for (int i = 0; i < rows; i++)
// 		for (int j = 0; j < cols; j++)
// 			cin >> matrix[i][j];
// 	cout << "\t\t\t__________________________________________________\n";
// 	bool isSaddle = true;
// 	int min = 0;
// 	int max = 0;
// 	for (int i = 0; i < rows; i++) {
// 		for (int j = 0; j < cols; j++) {
// 			int current_element = matrix[i][j];
// 			bool isSaddle = true;

// 			// Check row
// 			for (int k = 0; k < cols; k++) {
// 				if (matrix[i][k] < current_element) {
// 					isSaddle = false;
// 					break;
// 				}
// 			}

// 			// Check column
// 			if (isSaddle) {
// 				for (int k = 0; k < rows; k++) {
// 					if (matrix[k][j] > current_element) {
// 						isSaddle = false;
// 						break;
// 					}
// 				}
// 			}

// 			if (isSaddle) {
// 				cout << current_element << " is a saddle point at (" << i << "," << j << ")\n";
// 			}
// 		}
// 	}