#include <stdio.h>

int main()
{
    char ch;
    printf("enter the  character:\n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upar case");
    }

        if (ch >= 'a' && ch <= 'z')
        {
            printf(" lower case:\n");
        }
    
        else
        {
            printf("not a english letter");
        }
    

    return 0;
}