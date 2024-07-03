// int dec_bin(int num) {
// 	int rem;
// 	int quo;
// 	int store = 0;
// 	int st = 1;
// 	while (num > 0) {
// 		rem = num % 2;
// 		store = store + rem*st;
// 		st *= 10;
// 		num /= 2;
// 	}
// 	return store;
// }
// int main(){
// 	int num = 0;
// 	cin >> num;
// 	int result = dec_bin(num);
// 	cout << result;