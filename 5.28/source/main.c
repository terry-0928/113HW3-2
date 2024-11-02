#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char changeCase(char c);

int main(void) 
{
    char k;
    printf("Enter a character: ");
    scanf("%c", &k);

    char result = changeCase(k);
    printf("Changed case: %c\n", result);

    return 0;
}

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
    else 
    {
        return c;
    }
}
