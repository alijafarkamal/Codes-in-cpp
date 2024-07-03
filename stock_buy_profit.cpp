// int arr[] = {100,180, 260,310,40,535,695};
// int length = sizeof(arr) / sizeof(arr[0]);
// bool True = true;
// int max = 0;
// for (int i = 0; i < length-1; i++) {
// 	int adj = 0;
// 	for (int j = i + 1; j < length; j++) {
// 		if (arr[j] - arr[i] > max) { max = arr[j]; adj = j; }
// 	}
// 	if(max>0 && adj>0)
// 	cout << arr[i] << "  " << max << endl;
// 	arr[adj] = -1;
// 	max = 0;
// }


	// for (int i = 1; i < n; ++i) {
	// 	// If current price is greater than the previous day, sell the stock
	// 	if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i - 1];
	// }

	// int prices[] = { 100, 180, 260, 310, 40, 535, 695 };
	// int n = sizeof(prices) / sizeof(prices[0]);
	// int sum = 0;
	// int k = 0;
	// for (int i = k; i < n-1; i++) {
	// 	for (int j = i + 1; j < n; j++) {
	// 		if (prices[i] > prices[j]) {
	// 			sum += prices[j - 1] - prices[i];
	// 			k = j;
	// 			break;
	// 		}
	// 	}
		
	// }
	// cout << sum;
