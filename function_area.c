#include <stdio.h>
#include <math.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main()
{
    float side = 4;

    printf("area of square is %f\n", squareArea(side));
    float radius = 6;
    printf("area  of circle is %f\n", circleArea(radius));

    float a = 5;
    float b = 2;
    printf("area of rectangle  is %f\n", rectangleArea(a, b));

    return 0;
}
float squareArea(float side)
{
    return pow(side, 2);
}
float circleArea(float radius)
{
    return 3.14 * radius * radius;
}
float rectangleArea(float a, float b)
{
    return a * b;
}