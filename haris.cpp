#include<iostream>
using namespace std;
int main(){
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout<<"Enter an alphabet:";
    cin>>c;

    // evalutes to 1 (true)if c is a lowercase vowel
    isLowercaseVowel= (c == 'a' || c == 'e' || c == 'i' || c =='o' || c =='u');

    // evalutes to 1 (true)if c is an uppercase vowel
    isUppercaseVowel= (c == 'A' || c == 'E' || c == 'I' || c =='O' || c =='U');

    // show an error message if c is not an alphabet
    if (!isalpha(c))
        printf(" Error! Non alphabetic letter. ");
    else if (isLowercaseVowel || isUppercaseVowel)
    cout<<c<<" is a vowel.  ]"<<endl;
    else
    cout<<c<<" is a consonant. "<<endl;
    
return 0;
}