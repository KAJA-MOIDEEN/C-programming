#include<stdio.h>
int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    // evaluates to 1 if variable c is a lowercase vowel

    lowercase_vowel = (c =='a') || (c == 'e') ||(c == 'i') || (c == 'o') ||(c == 'u');

    // evaluates to 1 if variable c is a lowercase vowel

    uppercase_vowel = (c =='A') || (c == 'E') ||(c == 'I') || (c == 'O') ||(c == 'U');

    // sow the error message if c is noot alphabet

    if(!isalpha(c))
        printf("Error! Non-Alphabectic character.");
    else if (lowercase_vowel||uppercase_vowel)
        printf("%c is a vowel.",c);
    else
        printf("%c is a consonant.",c);
    return 0;




}
