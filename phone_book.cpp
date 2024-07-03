// void Lookup(char name[][100], char phone[][100], int num, char look[]) {
// 	bool True;  // It's better to name variables in lowercase.
// 	for (int i = 0; i < num; i++) {
// 		True = true;  // Initialize True for each iteration of the outer loop.
// 		if (name[i][0] == look[0]) {
// 			for (int j = 1; j < num && look[j] != '\0'; j++) {  // Check until the end of the look array.
// 				if (name[i][j] != look[j]) {
// 					True = false;
// 					break;
// 				}
// 			}
// 			if (True) {
// 				for (int k = 0; k < num + 6; k++)
// 					cout << phone[i][k];
// 				break;
// 			}
// 		}
// 	}
// }

// int main() {
// 	char name[100][100];
// 	int num;
// 	cout << "How many names do you want to have in your phone-book?\n";
// 	cin >> num;

// 	// Adjusted the loop bounds for input.
// 	for (int i = 0; i < num; i++)
// 		cin >> name[i];

// 	char phone[100][100];
// 	for (int i = 0; i < num; i++)
// 		for (int j = 0; j < num + 6; j++)
// 			cin >> phone[i][j];

// 	cin.ignore();  // Consume the newline character left in the buffer.

// 	char look_name[5];
// 	cout << "Enter name: \n";
// 	cin.getline(look_name, 5);

// 	Lookup(name, phone, num, look_name);
