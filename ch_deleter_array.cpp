// void deleter(char arr[], char ch) {
// 	for (int i = 0; arr[i] != '\0'; i++) {
// 		if (arr[i] == ch) {
// 			for (int j = i; arr[j] != '\0'; j++)
// 				arr[j] = arr[j + 1];
// 		}
// 	}
// }
// int main()
// {
// 	char arr[] = "I am Ali Jafar a CS student at FAST NU Lahore";
// 	char ch;
// 	cin >> ch;
//     deleter(arr, ch);
// 	for (int i = 0; arr[i] != '\0'; i++)
// 		cout << arr[i];