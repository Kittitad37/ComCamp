#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int result;
    scanf("%d", &num);

    while (i <= 12)
    {
        result = num * i;
        printf("%d * %d = %d\n", num, i, result);
        i++;
    }

    return 0;
}