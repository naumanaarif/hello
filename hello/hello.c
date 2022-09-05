#include <stdio.h>

int main(void)
{
    char name[64];

    printf_s("What's your name? ");
    scanf_s("%[^\n]s", name);

    if (name[0] != '\0')
    {
        printf_s("Hello, %s!", name);
    }
    else
    {
        printf_s("Hello, world!\n");
    }

    return 0;
}