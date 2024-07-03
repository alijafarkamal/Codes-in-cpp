// 	const int size = 10;
// 	int set1[size] = { 2,3,4,6,12,42,13,7,1 };
// 	int set2[size] = { 1,5,7,23,15,8,9,17,90,20 };
// 	int count = 0;
// 	int set3[size * 2];
// 	for (int i = 0; i < size; i++)
// 	{
// 		for (int j = 0; j < size; j++) {
// 			if (set1[i] == set2[j] && set2[j] != -1) {
// 				set2[j] = -1;
// 				count++;
// 				break;
// 			}
// 		}
// 		//if(i<size)
// 		//set3[i] = set1[i];
// 		//if (i >= size && set2[i-10] != -1)
// 		//set3[i - 10] = set2[i - 10];

// 	}
// 	int siz = size;

// 	for (int i = 0; i < size * 2; i++)
// 	{
// 		set3[i] = set1[i];
// 		if (i >= size && set2[i - 10] != -1) {
// 			set3[siz] = set2[i - 10];
// 			siz++;
// 		}
// 	}

// 	//cout << endl << "Set1{";

// 	int min;
// 	for (int i = 0; i < size * 2 - count - 1; i++)
// 	{
// 		min = i;
// 		for (int j = i + 1; j < size * 2 - count; j++) {
// 			if (set3[min] > set3[j]) {
// 				min = j;
// 			}
// 		}
// 	swap(set3[min], set3[i]);
// }
// 	for (int i = 0; i < size * 2 - count; i++)
// 	{
// 		cout << set3[i] << " ";
// 	}