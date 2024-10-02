#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("Enter three integers\n");
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 >n3)
        {
            printf("%d is the largest\n",n1);
            if (n2 > n3)
            {
                printf("%d is the smallest\n", n3);
            }
            else
                printf("%d is the smallest\n", n2);
        }
        else
        {
            printf("%d is the largest\n", n3);
            printf("%d is the smallest\n", n2);
        }
    }
    else 
    {
        if (n2 > n3)
        {
            printf("%d is the largest\n", n2);
            if (n1 > n3)
            {
                printf("%d is the smallest\n", n3);
            }
            else
                printf("%d is the smallest\n", n1);
        }
        else
        {
            printf("%d is the largest\n", n3);
            printf("%d is the smallest\n", n1);
        }
    }
    system("pause");
    return 0;
}