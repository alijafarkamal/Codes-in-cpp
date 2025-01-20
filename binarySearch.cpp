#include <iostream>
using namespace std;

int binarySearch(int* arr, int n, int element) {
    int high = n - 1; // Correct the high index
    int low = 0;
    while (low <= high) { // Use <= to include mid in the search
        int mid = (high + low) / 2;
        
        if (element == arr[mid]) {
            return mid; // Return the index where the element is found
        }
        else if (element > arr[mid]) {
            low = mid + 1; // Move the low boundary up
        }
        else {
            high = mid - 1; // Move the high boundary down
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[6] = {2, 3, 4, 5, 8, 9};
    int index = binarySearch(arr, 6, 9);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
