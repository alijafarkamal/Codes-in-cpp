	int arr[] = { 1,5,3,2 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			for (int k = 0; k < length; k++) {
				if (arr[i] + arr[j] == arr[k]) {
					cout << arr[i] << " " << arr[j] << endl;
				}
				
			}
		}
	}