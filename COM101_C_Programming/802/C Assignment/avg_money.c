#include <stdio.h>
int main()
{
    char group_name[10];
    int money;
    float avg_money;

    scanf("%s", group_name);
    scanf("%d", &money);

    avg_money = money / 5;

    printf("Group name is %s\n", group_name);
    printf("Money is %d\n", money);
    printf("Average Money is %.2f ", avg_money);

    return 0;
}