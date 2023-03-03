//write a program in c to count the number of vowels and consonants in a string with multiple words using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], *ptr;
    int i, vowels = 0, consonants = 0;
    printf("Enter the string:");
    gets(str);
    ptr = str;
    for (i = 0; i < strlen(str); i++)
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            vowels++;
        }
        else if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z')
        {
            consonants++;
        }
        ptr++;
    }
    printf("Number of vowels is %d and number of consonants is %d", vowels, consonants);
    return 0;
}