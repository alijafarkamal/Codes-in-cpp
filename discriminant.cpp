#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,x1,x2,discriminant,realpart,imaginarypart;
    cout<<"Enter coefficients a,b and c:";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;

    if (discriminant >0) {
        x1= (-b+sqrt(discriminant))/(2*a);
        x2= (-b-sqrt(discriminant))/(2*a);
        cout<<"Roots are real and different."<<endl;
        cout<<"x1="<<x1<<endl;
         cout<<"x2="<<x2<<endl;

    }
    else if(discriminant=0){
        cout<<"Roots are real and same."<<endl;
        x1=-b/(2*a);
        cout<<"x1=x2"<<x1<<endl;

    }
    else {
        realpart= -b/(2*a);
        imaginarypart= sqrt(-discriminant)/(2*a);
        cout<<"Roots are complex and different. "<<endl;
        cout<<"x1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
        cout<<"x2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;


    }


    return 0;
}