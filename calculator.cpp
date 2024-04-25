#include<iostream>
using namespace std;

float add (float x, float y)
{
    return x+y;
}
float sub (float x, float y)
{
    return x-y;
}
float mul (float x, float y)
{
    return x*y;
}
float divide (float x, float y)
{
    return x/y;
}

float main()
{
    cout<< "*** Welcome to our calculator program ***"<<endl;

    float n1,n2,answer;

    while (true)
    {
        cout<< "Enter the value for number 1 "<<endl;
        cin>>n1;
        cout<< "Enter the value for number 2 "<<endl;
        cin>>n2;

        cout<<"Press A for addition, press S for subtraction, press M for multiplication, press D for division";
    
        char input;
        cin>>input;

        switch (input)
        {
            case 'A':
            answer= add (n1,n2);

            case 'S':
            answer= sub (n1,n2);

            case 'M':
            answer= mul (n1,n2);

            case 'D':
            answer= divide (n1,n2);
        }

        if (input =='A') answer= add (n1,n2);
        if (input =='S') answer= sub (n1,n2);
        if (input =='M') answer= mul (n1,n2);
        if (input =='D') answer= divide (n1,n2);

        cout<<"Your answer is :"<< answer<<endl;
        cout<<" Press any key if you want to continue . . . Press Q to quit"<<endl;

        cin>>input;
        if (input == 'Q') break;
    }
    return 0;
}