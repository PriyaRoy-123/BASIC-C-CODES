#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * (sizeof(float)));
    ptr[0] = 13.5;
    ptr[1] = 23.5;
    ptr[2] = 56;
    ptr[3] = 21;
    ptr[4] = 14.8;
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}