#include <stdio.h>

int main(void)
{
    int number;
    int printed = 0;
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Error");
        return 0;
    }
    if (number == 0)
    {
        printf("No");
        return 0;
    }
    if (number % 3 == 0)
    {
        printf("Up");
        printed = 1;
    }
    if (number % 5 == 0)
    {
        printf("Go");
        printed = 1;
    }
    if (number % 7 == 0)
    {
        printf("!!");
        printed = 1;
    }
    if (printed == 0)
        printf("No");
    return 0;
}
