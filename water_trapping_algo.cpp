	int arr[] = { 3,0,0,2,0,5 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	int lmax = 0;
	
	int L[6];
	//int minlr;
	for (int i = 1; i < length - 1; i++) {
		if (arr[i - 1] > lmax)
			lmax = arr[i - 1];
		L[i] = lmax;		
	}
	//0 3 3 3 3 3
	lmax = 0;
	int arr1[6];
	int R[6];
	for (int i = length-2; i >=0; i--) {
		if (arr[i + 1] > lmax)
			lmax = arr[i + 1];
		R[i] = lmax;
	}
	// 5 5 5 5 5 0
	lmax = 0;
	for (int i = 1; i < length - 1; i++) {
		lmax = min(L[i], R[i]);
		if (lmax > arr[i])
			sum += lmax-arr[i];
	}
	cout << sum;