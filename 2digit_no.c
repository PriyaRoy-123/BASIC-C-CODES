#include <stdio.h>
#include <math.h>
// two digit no.->1
// otherwise -> 0

int main()
{
    int x;
    printf("enter the no:");
    scanf("%d", &x);
    printf("%d", x > 9 && x < 100);
    return 0;
}
