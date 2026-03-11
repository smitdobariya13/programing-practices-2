//Enter a string and print it in lowercase letters.
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s", str);

    return 0;
}
