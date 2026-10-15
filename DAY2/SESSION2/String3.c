#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
    int count[26] = {0};

    if(strlen(s) != strlen(t))
        return false;

    for(int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    char s[100], t[100];

    printf("Enter the first string: ");
    scanf("%99s", s);

    printf("Enter the second string: ");
    scanf("%99s", t);

    if(isAnagram(s, t))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}