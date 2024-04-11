#include <stdio.h>
int sum(int a, int b); // function declaration

int main()
{
    int a, b;
    printf("enter the value of  first no:\n");
    scanf("%d", &a);
    printf("enter the value of second no:\n");//function  call
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is: %d\n", s);

    return 0;
}
int sum(int x, int y)
{// funcion definition   
    return x + y;
}