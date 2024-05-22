#include <stdio.h>

int main()
{
    int salary;
    scanf("%d", &salary);

    if (salary >= 0)
    {
        if (salary >= 0 && salary <= 15000)
        {
            printf("Beginner\n");
        }
        else if (salary > 25000)
        {
            printf("High-Level\n");
        }
        else
        {
            printf("Mid-Level\n");
        }
    }
    else
    {
        printf("Error");
    }
}