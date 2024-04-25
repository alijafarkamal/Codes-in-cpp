	// int arr[] = { 1,2,3,4,5}; // 5 2 3 4 1 // 5 1 3 4 2 // 
	// int length = sizeof(arr) / sizeof(arr[0]);

	// int max = 0;
	// int min  = arr[0];
	// int max_h = 0;
	// int min_h = 0;
	// for (int i = 0; i < length  ; i++) {
		
	// 	for (int j = i; j < length; j++) {
	// 		if (i % 2 == 0) {
	// 			if (arr[j] > max) {
	// 				max = arr[j]; 
	// 				max_h = j;
	// 			}
	// 		}
	// 		else {
	// 			if (arr[j] < min) {
	// 				min = arr[j];
	// 				min_h = j;
	// 			}
	// 		}
	// 	}
	// 	if (i % 2 == 0) {
	// 		int temp = arr[i];
	// 		arr[i] = max;
	// 		arr[max_h] = temp;

	// 	}
	// 	else {
	// 		int temp = arr[i];
	// 		arr[i] = min;
	// 		arr[min_h] = temp;
	// 	}
	// 	max = 0;
	// 	min = 100;
	// }
	// for (int i = 0; i < length; i++) {
	// 	cout << arr[i] << " ";
	// }