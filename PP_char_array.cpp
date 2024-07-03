// int myStrlen(char str[]) {
// 	int count = 0;
// 	for (int i = 0; str[i] != '\0'; i++)
// 		if(str[i]!=' ') count++;

// 	return count;
// }
// int IndexOfSubstring(char str[], string substring)
// {

// 	int index = 0;
// 	int length = substring.length()+1;
// ;
// 	for (int i = 0; str[i] != '\0'; i++) {
// 		if (str[i] == substring[index])
// 		{
// 			while (index < length) {
// 				i++; index++;
// 				if (str[i] != substring[index]) {
// 					break;
// 				}
// 			}
// 			if (index == length - 1) {
// 				return i - index;
// 			}
// 		}
// 	}
// }
// void tokenization(char str[], char arr[]) {
	
// 	int index = 0;
// 	int i = 0;
	
// 	for (int i = 0; str[i] != '\0'; i++) {
// 		if (str[i] == ' ') {
// 			while (index < i) {
// 				arr[index] = str[index];
// 				index++;
// 			}
// 			arr[i] = '!';
// 		}
// 	}
// 	for (int i = index; str[i] != '\0'; i++) {
// 		arr[i] = str[i];
// 	}
// }
// int main() {
// 	char str[100];
// 	char sub[100];
// 	char arr[1000];
// 	cout << "Input string \n";
// 	cin.getline(str, 100);
// 	cin.ignore();
// 	cout << endl;
// 	cout << "Input substring \n";
// 	cin.getline(sub, 100);
// 	cout << "No.of characters : ";
// 	cout<<myStrlen(str);
// 	cout << endl;
// 	cout << "Index of substring is : ";
// 	cout<<IndexOfSubstring(str, sub);
// 	cout << endl;
// 	cout << "Words of string are : ";
// 	tokenization(str, arr);
// 	for (int i = 0; str[i] != '\0'; i++)
// 		cout << arr[i];
