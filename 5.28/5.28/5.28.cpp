#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char changeCase(char c)
{
    if (isupper(c))
    {
        return tolower(c);
    }
    else if (islower(c))
    {
        return toupper(c);
    }
    return c;
}

int main(void)
{
    char ch;
    printf("Enter an alphabet character: ");
    scanf_s(" %c", &ch);

    printf("Changed case: %c\n", changeCase(ch));

    system("pause");
    return 0;
}