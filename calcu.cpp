#include<iostream>
/*#include<string>*/
using namespace std;
double add(int x, int y){
    return x+y;
}
double sub(int x, int y){
    return x-y;
}
double mul(int x, int y){
    return x*y;
} 
double divide(int x, int y){
    return x/y;
}

int main(){
    /*int a;
    int b;

    cin>>a;
    cin>>b;

    cout<<sum(a,b)<<endl;
    int a=3;
    int *point= &a;
    cout<<point;
    string name,pass;
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Enter your password : "<<endl;
    cin>>pass;


    cout<<"The name you enter was : "<<name<<endl;
    cout<<"The password you entered was : "<<pass<<endl;*/
    cout<<"***welcome to our calculator program***."<<endl;
    double n1,n2,answer;
    while (true)
    {
      cout<<"Enter value of n1."<<endl;
      cin>>n1;
      cout<<"Enter value of n2."<<endl;
      cin>>n2;
      cout<<"Press A for addition, S for subtraction, M for multiplication, D for division."<<endl;

      char input;
      cin>>input;
    switch (true)
    {
    case 'A':
    answer= add(n1,n2);
    break;

    case 'S':
    answer= sub(n1,n2);
    break;

    case 'M':
    answer= mul(n1,n2);
    break;

    case 'D':
    answer= mul(n1,n2);
    break;
    }
      if (input == 'A') answer= add(n1,n2);
      if (input == 'S') answer= sub(n1,n2);
      if (input == 'M') answer= mul(n1,n2);
      if (input == 'D') answer= divide(n1,n2);
      cout<<"Your answer is : "<<answer<<endl;
      cout<<"Press any key if you want to continue . . . Press Q to quit."<<endl;
      cin>>input;
      if (input == 'Q') break;
      
    }
    


    return 0;
}