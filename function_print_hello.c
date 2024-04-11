#include <stdio.h>
// declaration/prototype
void printHello();

int main()
{
    printHello(); // function call
    printHello();

    return 0;
}
// function definition
void printHello()
{
    printf("Hello!\n");
}