#include <iostream>
using namespace std;
int main() {
    int num;
    int binary = 0;
    int rem;
    int digit = 1;
    cout<<"Enter decimal number : \n";
    cin>>num;
    while(num>0)
    {
        rem = num % 2;
        binary += (rem * digit);
        num /= 2;
        digit *= 10;
    }
    cout<<"Number in binary : "<<binary<<"\n";

  return 0;
}