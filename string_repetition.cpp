//     // string s;
//     // getline(cin, s);
//     // int k = 0;
//     // bool isNotRepeated;

//     // for (int i = 0; i < s.length(); i++) {
//     //     isNotRepeated = true;

//     //     // Check for consecutive occurrences
//     //     for (int j = 0; j < i; j++) {
//     //         if (s[i] == s[j]) {
//     //             isNotRepeated = false;
//     //             break;
//     //         }
//     //     }

//     //     // If the character is not repeated, append it to the result string
//     //     if (isNotRepeated==true) {
//     //         s[k++] = s[i];
//     //     }
//     // }

//     // // Display the compressed string
//     // for (int i = 0; i < k; i++) {
//     //     cout << s[i];
//     // }
//        string s;
//    getline(cin, s);
//    int k = 0;
//    bool isNotRepeated = true;
//    for (int i = 0; s[i]!='\0'; i++) {
//        for (int j = 0; j < i; j++) {
//            if (s[i] != s[j]) isNotRepeated = true;
//            else { isNotRepeated = false; break; }
//        }
//        if (isNotRepeated==true) {
//            s[k++] = s[i];
//        }
//    }
//    for (int i = 0; i < k; i++)
//        cout << s[i] << " ";