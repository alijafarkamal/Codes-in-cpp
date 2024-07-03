#include<iostream>
using namespace std;

int main(){
    int n1, n2, result = 0;
    char op;
    cout<<"Enter n1 : ";
    cin>>n1;
    cout<<"Enter n2 : ";
    cin>>n2;
    cout<<"Enter operator (+,-,/,*) ";
    cin>>op;

    if(op == '+') result=n1+n2;
    else if(op == '-') result=n1-n2;
    else if(op == '*') result=n1*n2;
    else if(op == '/') result=n1/n2;
    else
    cout<<"Invalid operator! "<<endl;
    cout<<"Outcome is "<<result;



    system("pause");
    return 0;
}