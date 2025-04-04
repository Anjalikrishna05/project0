#include <stdio.h>

int main()
{
    int num =0;
    int sum =0;
    do
    {
        printf("enter a number");
        scanf("%d", &num);
        if (num > 0)
        {
            sum += num;
        }

    } while (num > 0);
    printf("sum:%d", sum);

    return 0;
}
