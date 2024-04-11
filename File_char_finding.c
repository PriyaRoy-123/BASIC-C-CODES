#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen(" Test.txt", "r");
    char ch;
    fscanf(fptr, "%c\n", &ch);
    printf("character =%c\n", ch);
    fclose(fptr);

    return 0;
}