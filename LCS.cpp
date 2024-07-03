// void findLCS(char str[], char str1[], int len, int len1) {
// 	int count = 0;
// 	string LCS = "";
// 	for (int i = 0; str[i] != '\0'; i++) {
// 		for (int j = 0; str1[j] != '\0'; j++) {
// 			if (str[i] == str1[j]) {
// 				LCS +=  str1[j];
// 				count++;
// 				str1[j] = '&';
// 				break;
// 			}
// 		}
// 	}
// 	cout << LCS << endl;
// 	cout << count;
// }
// int main() {
// 	char str[] = "AGGTAB";
// 	char str1[] = "GXTXAYB";
// 	int len = strlen(str);
// 	int len1 = strlen(str1);
// 	findLCS(str, str1, len, len1);