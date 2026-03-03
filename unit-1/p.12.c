//Enter your name and print it vertically.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    for(int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}

