#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("Enter two integers\n");
    int n1, n2, R;
    scanf_s("%d%d", &n1, &n2);
    R = n1 % n2;
    if (R == 0)
        printf("%d is a multiple of %d\n", n1, n2);
    else
        printf("%d isn't a multiple of %d\n", n1, n2);
    system("pause");
    return 0;
}