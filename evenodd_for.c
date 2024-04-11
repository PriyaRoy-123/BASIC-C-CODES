#include <stdio.h>

int main()
{
    for (float i = 2.0; i <= 100.0; i += 2)
    {
        printf("%f\n", i);
    }
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\n", ch);
    }
    return 0;
}