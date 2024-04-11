#include <stdio.h>
void printTable(int n);

int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printTable(n); // argument/actual parameters

    return 0;
}
void printTable(int n)
{
    for (int i = 1; i <= 10; i++) // parameters/formal parameters
    {
        printf("%d\n", i * n);
    }
}