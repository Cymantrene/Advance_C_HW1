#include <stdio.h>

int main()
{
    int num, current, count = 0, max = -2147483648;
    scanf("%d", &num);
    for ( int i = 0; i < num; i++)
    {
        scanf("%d", &current);
        if (current > max)
        {
            max = current;
            count = 1;
        }
        else if (current == max)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
