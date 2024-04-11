#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d\n", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d\n", n * i);
    }
    return 0;
}