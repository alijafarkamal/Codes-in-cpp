// #include <iostream>
// #include <string>
// using namespace std;
// struct book {
//     string author;
//     string title;
//     int year;
//     //char arr[100];
// };
// //struct Student {
// //    string name;
// //    int age;
// //    char grade;
// //};

// int main() {
//     const int size = 10;
//     book cook[size];
  
//     int num;
//     cout << "Enter how many books' information do you want?" << endl;
//     cin >> num;
//     int i = 0;
//     char choice;
//     do
//     {
//         book bina;
//         cout << "Title\n";
//         getline(cin, cook[i].title);
        
//         cout << "Author\n";
//         getline(cin, cook[i].author);
      
//         cout << "Year\n";
//         cin>>cook[i].year;
//         cin.ignore();
//         i++;
        
//     } while (i<num);

//     for (int i = 0; i < num; i++) {
//         cout << "Title\n" << cook[i].title << endl;
//         cout << "Author\n" << cook[i].author << endl;
//         cout << "Year\n" << cook[i].year << endl;
//     }

//     //// Define an array of Student structs with a fixed size
//     //const int MAX_STUDENTS = 10;
//     //Student students[MAX_STUDENTS];

//     //// Track the number of students entered
//     //int numStudents = 0;

//     //// Loop until the user chooses to stop
//     //char choice;
//     //do {
//     //    // Get information for a new student
//     //    Student student;
//     //    cout << "Enter student name: ";
//     //    getline(cin, student.name);
//     //    cout << "Enter student age: ";
//     //    cin >> student.age;
//     //    cout << "Enter student grade: ";
//     //    cin >> student.grade;
//     //    cin.ignore();

//     //    // Check if there is enough space
//     //    if (numStudents >= MAX_STUDENTS) {
//     //        cout << "Maximum number of students reached!" << endl;
//     //        break;
//     //    }

//     //    // Add the student to the array
//     //    students[numStudents] = student;
//     //    numStudents++;

//     //    // Ask the user if they want to add another student
//     //    cout << "Enter another student? (y/n): ";
//     //    cin >> choice;
//     //    cin.ignore();
//     //} while (choice == 'y');

//     //cout << endl << "Student information:" << endl;
//     //for (int i = 0; i < numStudents; i++) {
//     //    cout << "Name: " << students[i].name << endl;
//     //    cout << "Age: " << students[i].age << endl;
//     //    cout << "Grade: " << students[i].grade << endl;
//     //    cout << endl;
//     //}
// struct Rectangle {
//   double width;
//   double height;
// };

// // Function to calculate the area of a rectangle
// double calculateArea(const Rectangle& rectangle) {
//   return rectangle.width * rectangle.height;
// }

// int main() {
//   // Create a rectangle object
//   Rectangle rectangle;

//   // Prompt user for width
//   std::cout << "Enter the width of the rectangle: ";
//   std::cin >> rectangle.width;

//   // Prompt user for height
//   std::cout << "Enter the height of the rectangle: ";
//   std::cin >> rectangle.height;

//   // Calculate the area
//   double area = calculateArea(rectangle);

//   // Display the area
//   std::cout << "The area of the rectangle is: " << area << std::endl;

//   return 0;
// }

//     system("pause");
//     return 0;
// }
