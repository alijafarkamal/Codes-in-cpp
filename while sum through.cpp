#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int i = 0;
    cin >> n;
    while ( i<n) 
    { 
        i++;
        sum += i;
    }
    cout << sum;
    system("pause");
    return 0;
}