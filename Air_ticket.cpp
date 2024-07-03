// #define N 6
// #define M 4

// int avaliable_seats(int arr[][M]) {
// 	int count = 0;
// 	for(int i = 0; i<N; i++)
// 		for (int j = 0; j < M; j++)
// 			if (arr[i][j] == 0) count++;
// 	return count;
// }
// void category(int seats[][M], int ans, bool& True) {
// 	True = false;
// 	int business_class = 0;
// 	int first_class = 0;
// 	int economy_class = 0;
// 	int K = 1; int P = 3;
// 	for (int i = 0; i < N; i++) {
// 		for (int j = 0; j < M; j++) {
// 			if (i <= K && seats[i][j] == 0) first_class++;
// 			else if (i <= P && seats[i][j] == 0) business_class++;
// 			else if (i <= N-1 && seats[i][j] == 0) economy_class++;
// 		}
// 	}
// 	if (ans == -1) {
// 		cout << "First-class : " << first_class << endl;
// 		cout << "Business-class : " << business_class << endl;
// 		cout << "economy-class : " << economy_class << endl;
// 	}
// 	else if(ans<=K+1){
// 		if (first_class <= 0) { cout << "Seat is not avaliable. \n"; True = true; }
// 	}
// 	else if (ans <= P+1) {
		
// 			if (business_class <= 0){ cout << "Seat is not avaliable. \n"; 
// 			True = true; }
// 	}
// 	else if (ans <= N) {
		
// 			if (economy_class <= 0){ cout << "Seat is not avaliable. \n"; True = true;
// 	    }
// 	}

// }
// void Category_advisor(int ans) {
// 	if (ans > 0 && ans < 3) cout << " first-class\n";
// 	if (ans > 2 && ans < 5) cout << " business-class\n";
// 	if (ans > 4 && ans < 7) cout << " economy-class\n";
// }
// void seat_reserver(int arr[][M], int row, int col, bool& seat) {
// 	//for(int i = 0; i<N; i++)
// 	//	for (int j = 0; j < M; j++) 
// 	seat = false;
// 			if (arr[row][col] == 0) {
// 				cout << "Your seat is reserverd in";
// 				arr[row][col] = 1;
// 			}
// 			else {
// 				cout << "Your seat is not avaliable";
// 				seat = true;
// 			}
		
// }
// int main() {
// 	int ans = -1;
// 	bool True = false;
// 	bool seat = false;
<<<<<<< HEAD
// 	int arr[N][M] = {{1,0,1,1},
=======
// 	int arr[N][M] = 		{{1,0,1,1},
>>>>>>> 49906f5 (added)
// 					 {0,1,0,1},
// 					 {1,1,1,0},
// 					 {0,1,1,0},
// 					 {1,0,1,0},
// 					 {0,0,1,1} };
// 	cout << "Avaliable seats : ";
// 	cout << avaliable_seats(arr) << endl;
// 	if (avaliable_seats(arr) <= 0) {
// 		cout << "Sorry! seats are not avaliable. \n";
// 		goto label;
// 	}
	
// 	cout << "CATEGORY : " << endl;
// 	category(arr,ans,True);
// 	char reply;
// 	cout << "Enter Y if you want to continue \n";
// 	cin >> reply;
// 	if (reply != 'Y') goto label;
// 	label1:
// 	cout << "Enter Row number : ";
// 	cin >> ans;
// 	True = false;
// 	category(arr, ans,True);
// 	if (True == true) { goto label1; }
// 	cout << "You have chosen";
// 	Category_advisor(ans);
// 	int seat_number;
// label2:
// 	cout << endl;
// 	cout << "Please enter seat number : ";
// 	cin >> seat_number;
// 	seat_reserver(arr, ans, seat_number,seat);
// 	if (seat == 0) Category_advisor(ans);
// 	else goto label2;


// 	label:
// 	system("pause");
// 	return 0;
// }