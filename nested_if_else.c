#include <stdio.h>

int main()
{
    int num;
    printf("enter the value of num:\n");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("positive number\n");


        if (num % 2 == 0)
        {
            printf("even number\n");
        }
    }
        else
        {
            printf("negative number\n");
        }
    

    return 0;
}