#include<iostream>
using namespace std;

int main(){
    double n, i;
    cin>>n;
    for(i = 10; i<17; i++)
    {
        cout<<n-i<<endl;
    }
    if (n<i)
    {
        cout<<"Invalid number! Enter number >= 10.";
    }
    // double CGPA;
    // cout<<"Enter your CGPA : \n";
    // cin>>CGPA;
    // if (CGPA > 4.00 || CGPA<0) cout<<"Invalid CGPA! ";
    // else if (CGPA >= 4.00 ) cout<<"A + \n";
    // else if (CGPA>= 3.67 && CGPA<4 ) cout<<"A \n";
    // else if(CGPA>= 3.33 && CGPA<3.67) cout<<"B+ \n";
    // else if (CGPA>= 3.00 && CGPA<3.33) cout<<"B \n";
    // else if (CGPA>= 2.67 && CGPA<3.00) cout<<"B- \n";
    // else if (CGPA>= 2.33 && CGPA<2.67) cout<<"C+ \n";
    // else if (CGPA>= 2.00 && CGPA<2.33) cout<<"C \n";
    // else if (CGPA>= 1.67 && CGPA<2.00) cout<<"C- \n";
    // else if (CGPA>= 1.33 && CGPA<1.67) cout<<"D+ \n";
    // else if (CGPA>= 1.00 && CGPA<1.33) cout<<"D \n";
    // else if (CGPA>= 0.00 && CGPA<1.00) cout<<"F \n";
        
    

    system("pause");
    return 0;
}