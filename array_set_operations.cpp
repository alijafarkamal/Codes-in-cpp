// #define size 7
// #define size1 9
// #define size2 100
// void input(int arr1[size],int arr2[size]) {
// 	for (int i = 0; i < size; i++)
// 		cin >> arr1[i];
// 	for (int i = 0; i < size; i++)
// 		cin >> arr2[i];
// }
// void output(int arr1[],int arr2[]) {
// 	cout << "Set1 = {";
// 	cout << arr1[0];
// 	for (int i = 1; i < size; i++)
// 		cout << ", " << arr1[i];
// 	cout << "}";
// 	cout << endl;
// 	cout << "Set2 = {";
// 	cout << arr1[0];
// 	for (int i = 1; i < size; i++)
// 		cout << ", " << arr2[i];
// 	cout << "}";
// 	cout << endl;
// }
// int intersection(int arr1[], int arr2[], int arr3[], int size_, int size1_, int count) {
// 	int index = 0;
// 	count = 0;
// 	for (int i = 0; i < size_; i++)
// 		for (int j = 0; j < size1_; j++)
// 			if (arr1[i] == arr2[j]) { arr3[index++] = arr1[i]; arr2[j] = -100; count++; }
// 	return count;
// }
// void Union(int arr1[], int arr2[], int arr3[], int size_, int size1_, int& count) {
// 	count = 0;
// 	bool is_valid;
// 	for (int i = 0; i < size_; i++) arr3[count++] = arr1[i];
// 	for (int i = 0; i < size1_; i++) {
// 		is_valid = true;
// 		for (int j = 0; j < size_; j++) {
// 			if (arr2[i] == arr1[j]) is_valid = false;
// 		}
// 		if (is_valid)
// 			arr3[count++] = arr2[i];
// 	}
// }
// void difference(int arr1[], int arr2[], int arr3[], int size_, int size1_, int& count) {
// 	count = 0;
// 	for (int i = 0; i < size_; i++) {

// 	}
		
// }
// int main() {
// 	int arr1[size]={ 1,2,3,12,9,6,7 };
// 	int arr2[size1]={ 8,9,3,11,12,1,14,15,7 };
// 	int arr3[size2];
// 	int length = 0;
// 	int size_ = size;
// 	int size1_ = size1;
// 	input(arr1,arr2);
// 	output(arr1, arr2);
// 	intersection(arr1, arr2, arr3,size_, size1_, length);
// 	Union(arr1, arr2, arr3, size_, size1_, length);
// 	//for (int i = 0; i < length; i++)if(arr3[i]!=-100) cout << arr3[i] << " ";
// 	difference(arr1, arr2, arr3, size_, size1_, length);
