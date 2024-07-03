#include<iostream>
using namespace std;

int main(){
    /*int i;
    for ( i = 42; i <=72; i = i+2)
    {
        cout<<i<<endl;
    }

    
    int n= 0;
    do
    {
        cout<<"loop is running "<<endl;
        cout<<"Ali is wali of Allah "<<endl;
        n++;
    }while(n<25);*/
    int a, b, c;
    cout<<"Enter the starting range =";
    cin>>a;
    cout<<"Enter the final range";
    cin>>b;
    c = (a / 2) *2;
    if (a==c){

        while(a<=b){
            a +=2;

        }
    }
    else{
        a++;
        while (a <= b)
        a += 2;
    }
    

    return 0;
}