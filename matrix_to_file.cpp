// void writeMatrixToFile(const char matrix[][cols]) {
//     // Open the file for writing
//     ofstream outputFile("Output.txt");

//     // Check if the file is open
//     int count = 0;
//    for(int i = 0; i<rows;){

//        int j = cols-1;
//        for (int k = 0; k <= i;) {
//            outputFile << matrix[i][j];
//            if (k < i) outputFile << ", ";
//            i--;
//            j--;
//        }
//        count++;
//        i = count;
//        outputFile << endl;
//     }
//    count = 0;
//    for (int i = 0; i < rows - 1;i++) {
//        int l = cols - 1;
//        int j = cols - 2-i;
//        for (int k = cols-2; k >= i;k--) {
//            outputFile << matrix[l][j];
//            if (k > i) outputFile << ", ";
//            l--;
//            j--;
//        }
//        //count++;
//        //i = count;
//        outputFile << endl;
//    }


  
//     // Close the file
//     outputFile.close();
// }

// int main() {
    
   
//     char arr[rows][cols] = {
//       {'A', 'B', 'C', 'D', 'E'},
//       {'F', 'A', 'B', 'C', 'D'},
//       {'G', 'F', 'A', 'B', 'C'},
//       {'H', 'G', 'F', 'A', 'B'},
//       {'I', 'H', 'G', 'F', 'A'}
//     };
//     writeMatrixToFile(arr);