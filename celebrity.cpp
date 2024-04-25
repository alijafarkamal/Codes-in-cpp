//    int knows[3][3] = {
//        {0, 1, 1},
//        {0, 0, 0},
//        {1, 1, 0}
//    };
//    int candidate = 10;
//    int n = 3;
//    for (int i = 1; i < n; ++i) {
//        if (knows[candidate][i]) {
//            candidate = i;
//        }
//    }

   
//    for (int i = 0; i < n; ++i) {
//        if (i != candidate && (knows[candidate][i] || !knows[i][candidate])) {
//            candidate=  -1; 
//        }
//    }
//    cout << candidate;