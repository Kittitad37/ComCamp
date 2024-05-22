#include <stdio.h>

float Area(int radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main()
{
    int radius;
    float area;

    scanf("%d", &radius);
    area = Area(radius);

    printf("Area = %.2f", area);
    return 0;
}