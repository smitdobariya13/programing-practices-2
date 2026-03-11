//Enter 2 strings and concate them.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("Concatenated string = %s", str1);

    return 0;
}
