//Enter a string and find out the string is palindrome or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);


    for(i = 0; i < len; i++)
        str[i] = tolower(str[i]);

    i = 0;
    j = len - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
