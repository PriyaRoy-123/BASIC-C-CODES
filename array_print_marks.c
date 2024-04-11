#include <stdio.h>

int main()
{
    int marks[5];
    printf("enter phy marks:\n");
    scanf("%d", &marks[0]);
    printf("enter chem marks:\n");
    scanf("%d", &marks[1]);
    printf("enter math marks:\n");
    scanf("%d", &marks[2]);
    printf("phy=%d,chem=%d,math=%d", marks[0], marks[1], marks[2]);

    return 0;
}