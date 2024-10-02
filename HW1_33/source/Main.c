#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double n1, n2, n3, n4, n5, total;
    printf("Total miles driven per day\n");
    scanf("%lf", &n1);
    printf("Cost per gallon of gasoline\n");
    scanf("%lf", &n2);
    printf("Average miles per gallon\n");
    scanf("%lf", &n3);
    printf("Parking fees per day\n");
    scanf("%lf", &n4);
    printf("Tolls per day\n");
    scanf("%lf", &n5);
    total = n1 / n3 * n2 + n4 + n5;
    printf("Total fees=%.1f\n",total);
    system("pause");
    return 0;
}