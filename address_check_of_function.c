#include <stdio.h>
void Printaddress(int n);

int main()
{
    int n = 4;

    Printaddress(n);
    printf("Address of n is %u\n, &n");

    return 0;
}
void Printaddress(int n)
{
    printf("Address of n is %u\n", &n);
}