#include <stdio.h>
int calcPercentage(int m1, int m2, int m3);

int main()
{
    int m1, m2, m3;
    printf("enter the marks of three subject\n);
    scanf("%d""%d""%d",&&&m1m2m3);
    printf("percentage marks :%d\n",calPercentage(m1,m2,m3));

    
    
    return 0;
}
int calPercentage(int m1, int m2, int m3)
{
    return ((m1 + m2 + m3) / 3) * 100;
}
