#include<iostream>
using namespace std;
void binarySearch(int* arr, int n,int element) {
    int high = n-1;
    int low = 0;
    int mid = (high + low)/2;
    while(low<=high){
        int mid = (high + low)/2;
        if(element==arr[mid]){
            return mid;
        }
        else if(element>arr[mid]){
            high = mid+1;
        }
        else{
            low = mid -1;;
        }    
    }
    return -1;
}
int main(){
    int arr [6] = {2,3 ,4, 5 ,8 ,9};
    cout<<"Index is "<<binarySearch(arr,6,9);
    return 0;
}
