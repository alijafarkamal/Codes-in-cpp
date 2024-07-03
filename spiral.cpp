	// int length = 0;
	// cout << "Enter the size of spiral: ";
	// cin >> length;

	// if (length % 2 == 0) {
	// 	cout << "Size can't be even" << endl;
	// }

	// else if (length < 1) {
	// 	cout << "Length must be a positive number" << endl;
	// }

	// else {
	// 	int temp = length * length;
	// 	int width = 1;
	// 	while (temp > 0) {
	// 		width++;
	// 		temp /= 10;
	// 	}

	// 	int square = 0;
	// 	int num = 0;
	// 	int middle = length / 2;

	// 	for (int i = 0; i < length; i++) {
	// 		for (int j = 0; j < length; j++) {
	// 			num = 0;
	// 			square = abs(j - middle) * 2 + 1;
	// 			square = max(square, length - (length / 2 - abs(i - middle)) * 2);
	// 			if (i - middle == square / 2) {
	// 				num = square * (square - 1) + j - (length - square) / 2 + 1;
	// 			}
	// 			else if (middle - i == square / 2) {
	// 				num = (square - 2) * (square - 2) + 2 * square - j + (length - square) / 2 - 2;
	// 			}
	// 			else if (j - middle == square / 2) {
	// 				num = (square - 2) * (square - 2) + square - i + (length - square) / 2 - 1;
	// 			}
	// 			else {
	// 				num = (square) * (square - 2) + i - (length - square) / 2 + 2;
	// 			}
	// 			cout << num;
	// 			temp = num;
	// 			int numWidth = 0;
	// 			while (temp > 0) {
	// 				numWidth++;
	// 				temp /= 10;
	// 			}
	// 			for (int k = 0; k < width - numWidth; k++) cout << " ";
	// 		}
	// 		cout << endl;
	// 	}
	// }

