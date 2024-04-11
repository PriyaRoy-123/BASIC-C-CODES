#include <stdio.h>
#include <string.h>

typedef struct ComputerengineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    coe s1;
    s1.roll = 74;
    s1.cgpa = 9.4;
    strcpy(s1.name, "shradha");
    printf("The student name is %s\n", s1.name);

    return 0;
}