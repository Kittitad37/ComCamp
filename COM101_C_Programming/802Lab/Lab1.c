#include <stdio.h>
int main()
{
    int id;
    scanf("%d", &id);
    int group = id / 100;
    printf("Activity Group %d\n", group);
    printf("Number %d", id % (group * 100));
}