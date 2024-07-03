// // void replaceSubstring(string& str, const string& findStr, const string& replaceStr) {
// //     int index = 0;
// //     while ((index = str.find(findStr, index)) != string::npos) {
// //         str.replace(index, findStr.length(), replaceStr);
// //         index += replaceStr.length();
// //     }
// // }

// // int main() {
// //     string str;
// //     getline(cin, str);

// //     string findStr;
// //     getline(cin, findStr);

// //     string replaceStr;
// //     getline(cin, replaceStr);

// //     replaceSubstring(str, findStr, replaceStr);

// //     cout << str << endl;


//     string str;
//     getline(cin, str);
    
//     string first;
//     string second;
//     getline(cin, first); 
//     getline(cin, second);
//     int j = 0;
//     bool True = false;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == first[j]) {
//             int l = i;
//             for (j = 1; first[j] != '\0'; j++) {
//                 if (str[++l] == first[j]) {
//                     True = true;
//                 }
//                 else {
//                     True = false;
//                     break;
//                 }
//             }
//         }
//         bool No1 = false;
//         bool No2 = false;
//         bool No = false;
//         if (True == true) {
//             if (first.length() > second.length())  No1 = true;
//             else if (second.length() > first.length())  No2 = true;
//             else if (second.length() == first.length())  No = true;
//         }
//         if (No == true) {
//             for (int k = 0; k < second.length(); k++) {
//                 str[i++] = second[k];
//             }
//         }
//         if (No1 == true) {
//             int l = first.length() - second.length();
//             for (int k = 0; k < second.length(); k++) {
//                 str[i++] = second[k];
//             }
//             for (int k = i; k < str.length(); k++) {
//                 str[k] = str[k + l];
//             }
          
//         }
//         if (No2 == true) {
//             int l = second.length() - first.length();
//             for (int k = str.length(); k > first.length() + i; k--) {
//                 str[k + l] = str[k];
//             }
//             for (int k = 0; k < second.length(); k++) {
//                 str[i++] = second[k];
//             }
//         }

//     }

//     for (int i = 0; str[i] != '\0'; i++)
//         cout << str[i];

    // str= "this lab is amazing and fascinating";
    // str1 = "ing";
    // str2 = "es me";
    // int index = str.find(str1);
    // while (index != string::npos) {
    //     //index per ja ke str1 ki length per str2 ghusa do
    //     //index ko agli str1 find krna ka liya next length ka sath add kr do
    //     str.replace(index, str1.length(), str2);
    //     index = (str.find(str1, index + str2.length()));
    // }

    // cout << str;
