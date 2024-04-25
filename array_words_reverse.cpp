// void reverse(char arr[]) {
// 	int count = 0;
// 	for (int i = 0; arr[i] != '\0'; i++)
// 		count++;
// 	int initial = 0;
// 	int max = 0;
// 	int box = 0;
// 	while (initial<=count) {
// 		if (arr[initial] == ' ' || arr[initial]=='\0')
// 		{
// 			box = initial;
// 			for (int i = max; i < (box+max)/2; i++) {
				
// 				int temp = arr[i];
// 				arr[i] = arr[--initial];
// 				arr[initial] = temp;
// 			}
// 			max = box+1;
// 			initial = box;
// 		}
// 		initial++;
// 	}
	
// }
// int main() {
// 	char arr[] = "Welcome to character arrays";
// 	reverse(arr);
// 	for (int i = 0; arr[i] != '\0'; i++)
// 		cout << arr[i];