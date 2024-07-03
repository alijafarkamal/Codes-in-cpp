	// int arr[] = { 2,4,1,3,5}; // 5 2 3 4 1 // 5 1 3 4 2 // 
	//  // 5 2 3 4 1 // 5 1 3 4 2 // 
	// int length = sizeof(arr) / sizeof(arr[0]);
	// int min = arr[0];
	// bool True = false;
	// int adj = 0;
	// for (int i = 0; i < length; i++) {
	// 	for (int j = i; j < length; j++) {
	// 		if (min == 100 && j == length - 1) { j = i - 1; True = true;   adj = i-j; }
	// 		if (arr[j] < min) {
	// 			min = arr[j];
	// 		}
			
	// 	}
	// 	if (True == 0 && min != arr[i]) cout << arr[i] << " " << min << endl;
	// 	if(True==1)  cout << arr[adj] << " " << min << endl;
	// 	min = 100;
	// }