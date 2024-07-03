#include <iostream>
#include <cstring>

// Function to calculate the length of a character array
size_t Length(const char arr[]) {
    return std::strlen(arr);
}

// Function to copy the content of the second array into the first one
void Copy(char dest[], const char src[]) {
    std::strcpy(dest, src);
}

// Function to order names by length
void orderNamesByLength(char name1[], char name2[], char name3[]) {
    // Compare lengths and swap if necessary
    if (Length(name1) > Length(name2)) {
        char temp[100];  // Assuming a maximum length of 100 characters for simplicity
        Copy(temp, name1);
        Copy(name1, name2);
        Copy(name2, temp);
    }
    if (Length(name2) > Length(name3)) {
        char temp[100];
        Copy(temp, name2);
        Copy(name2, name3);
        Copy(name3, temp);
    }
    if (Length(name3) > Length(name1)) {
        char temp[100];
        Copy(temp, name3);
        Copy(name3, name1);
        Copy(name1, temp);
    }
}

int main() {
    // Sample usage
    char name1[] = "Junaid Ahmad";
    char name2[] = "Ali M.";
    char name3[] = "Ali Khan";

    std::cout << "Before function call:\n";
    std::cout << "name1 = " << name1 << "\n";
    std::cout << "name2 = " << name2 << "\n";
    std::cout << "name3 = " << name3 << "\n";

    orderNamesByLength(name1, name2, name3);

    std::cout << "After function call:\n";
    std::cout << "name1 = " << name1 << "\n";
    std::cout << "name2 = " << name2 << "\n";
    std::cout << "name3 = " << name3 << "\n";

    return 0;
}

