#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("adult\n");
        printf("you can vote\n");
        printf("you can drive\n");
    }
    else
    {
        printf("not adult\n");
        printf("you cannot vote\n");
        printf("you cannot drive\n");
    }
    printf("Thank you");

    return 0;
}