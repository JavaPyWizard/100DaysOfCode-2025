#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int vowels = 0;
    int consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);
        if (isalpha(ch)) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
