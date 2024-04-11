#include <stdio.h>

int main()
{
    float Price[3];
    printf("enter 3 prices:\n");
    scanf("%f", &Price[0]);
    scanf("%f", &Price[1]);
    scanf("%f", &Price[2]);
    printf("total price 1 is =%f\n", Price[0] + (0.18 * Price[0]));
    printf("total price 2 is =%f\n", Price[1] + (0.18 * Price[1]));
    printf("total price 3 is =%f\n", Price[2] + (0.18 * Price[2]));
    return 0;
}