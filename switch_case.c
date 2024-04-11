#include <stdio.h>

int main()
{
    int day; // 1-mon,2-tue,3-wed,4-thurs,5-fri,6-sat,7-sun
    printf("enterday(1-7)\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("monday\n");
        break;

    case 2:
        printf("tueday\n");
        break;

    case 3:
        printf("wednesday\n");
        break;

    case 4:
        printf("thursday\n");
        break;

    case5:
        printf("friday\n");
        break;

    case6:
        printf("saturday\n");
        break;

    case7:
        printf("sunday\n");
        break;

    default:
        printf("not a valid day!");
    }

    return 0;
}