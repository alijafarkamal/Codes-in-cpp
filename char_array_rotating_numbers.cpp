    // char arr[rows][cols] = {
    //   {'A', 'B', 'C', 'D', 'E'},
    //   {'F', 'A', 'B', 'C', 'D'},
    //   {'G', 'F', 'A', 'B', 'C'},
    //   {'H', 'G', 'F', 'A', 'B'},
    //   {'I', 'H', 'G', 'F', 'A'}
    // };
    // char store = arr[0][0];
    // int minr = 0;
    // int minc = 0;
    // int maxr = rows-1;
    // int maxc = cols-1;
    
    // while (true) {
    //     for (int i = minc; i < maxc; i++) {
    //         arr[minr][i] = arr[minr][i + 1];
    //     }
    //     for (int i = minr; i < maxr; i++) {
    //         arr[i][maxc] = arr[i+1][maxc];
    //     }
    //     for (int i = maxc; i >0; i--) {
    //         arr[maxr][i] = arr[maxr][i-1];
            
    //     }
    //     for (int i = maxr; i > 1; i--) {
    //         arr[i][minc] = arr[i-1][minc];
    //     }
    //     arr[1][0] = store;
    //     break;
    // }
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout <<setw(3)<< arr[i][j];
    //     }
    //     cout << endl;
    // }