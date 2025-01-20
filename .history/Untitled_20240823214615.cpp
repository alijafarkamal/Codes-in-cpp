#include <bits/stdc++.h>
using namespace std;
void geeks()
{
    int var = 20;
    int* ptr = &var;
   

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
// Driver program
int main() 
{ 
  geeks(); 
  return 0;
}
