// #include <iostream>
// #include <iomanip>
// #include <fstream>
// using namespace std;
// void printData(char arr[]) {
// 	float sum = 0;
// 	int  count = 0;
// 	for (int i = 0; arr[i] != '\0'; i++) {
// 		if(arr[i]>='A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z' || arr[i]==' ')
// 		cout << arr[i];

// 		else if (arr[i] == '#') {
// 			sum += (arr[i+1]-48);
// 			count++;
// 		}
// 		else if (count == 3) {
// 			cout << "  " << sum/3;
// 			sum = 0;
// 			count = 0;
// 		}
// 		else if (arr[i] == '$') {
// 			cout << endl;
// 		}
// 	}
// }
// int main() {
// 	char arr[] = "“Ali Khan#5#6#1$Saad Nawaz Khan#3#4#9$Rehmat Ali#3#4#5$";
// 	printData(arr);

// 	system("pause");
// 	return 0;
// }