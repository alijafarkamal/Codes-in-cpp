#include<iostream>
using namespace std;
void bubbleSort(int* arr, int n) {
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr [6] = {2,8,5,3,9,4};
    bubbleSort(arr,6);
    for(int i=0;i<6; i++){
        cout<<arr[i]<<" ";  // Output: 2 3 4 5 8 9
    }
    return 0;
}
