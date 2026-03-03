//Enter a string and find out length of string with using string function and without string function.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length_with_function, length_without_function = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    length_with_function = strlen(str);


    while (str[length_without_function] != '\0')
    {
        length_without_function++;
    }

    printf("Length using strlen() function: %d\n", length_with_function);
    printf("Length without using function: %d\n", length_without_function);

    return 0;
}
