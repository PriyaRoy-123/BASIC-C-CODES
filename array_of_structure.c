#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[120];
};

int main()
{
    struct student IT[120];
    IT[0].roll = 74;
    IT[0].cgpa = 9.42;
    // IT[0].name="Priya";
    strcpy(IT[0].name, "Priya");
    printf("student name    :%s\n", "Priya");
    printf("student roll no :%d\n", IT[0].roll);
    printf("student cgpa    :%f\n", IT[0].cgpa);

    struct student ECE[180];
    ECE[0].roll = 64;
    ECE[0].cgpa = 9.32;
    // ECE[0].name="Piyush";
    strcpy(ECE[0].name, "Piyush");
    printf("student name   :%s\n", "Piyush");
    printf("student roll no:%d\n", ECE[0].roll);
    printf("student cgpa   :%f\n", ECE[0].cgpa);

    return 0;
}