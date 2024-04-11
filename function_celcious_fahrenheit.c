#include <stdio.h>
float changeTemp(float celsius);

int main()
{
    float far, celsius;
    printf("enter the value of celsius temp\n");
    scanf("%f", &celsius);
    printf("temp in fahrenheit is: %f", changeTemp(celsius));

    return 0;
}
float changeTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}