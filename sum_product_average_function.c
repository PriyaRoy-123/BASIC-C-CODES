#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a, b;
    int sum, prod, avg;
    printf("enter the value of a:\n");
    scanf("%d", &a);
    printf("enter the value of b:\n");
    scanf("%d", &b);
    dowork(a, b, &sum, &prod, &avg);
    printf("sum =%d,prod =%d,avg=%d\n", sum, prod, avg);

    return 0;
}
void dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}