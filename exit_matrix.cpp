//    char dir = 'd';
//    int count = 1;
//    int i = 0; int j = 0;
//    while (count <= rows * cols) {
//        if (dir == 'd') i++;
//        else if (dir == 'l') j--;
//        else if (dir == 'u') i--;
//        else if (dir == 'r') j++;

//        dir = (dir + 1) % 4;

//        if (matrix[i][j] == 0 && dir == 'd') i++;
//        else if (matrix[i][j] == 0 && dir == 'l') j--;
//        else if (matrix[i][j] == 0 && dir == 'u') i--;
//        else if (matrix[i][j] == 0 && dir == 'r') j++;

//        if (matrix[i][j] == 1 && dir == 'd') dir = 'l';
//        else if (matrix[i][j] == 1 && dir == 'l') dir = 'u';
//        else if (matrix[i][j] == 1 && dir == 'u') dir = 'r';
//        else if (matrix[i][j] == 1 && dir == 'r') dir = 'd';

//        if (matrix[i][j] == 0 && (j == 0 || j == cols - 1 || i == 0 || i == rows - 1)) {
//            cout << "Exit Point: (" << i << ", " << j << ")\n";
//            break;
//        }

//        count++;
//    }