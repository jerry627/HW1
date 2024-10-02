#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double n1, n2, n3;
    printf("Enter your weight(Kilogram)\n");
    scanf("%lf", &n1);
    printf("Enter your Height(meter)\n");
    scanf("%lf", &n2);
    n3 = n1 / (n2 * n2);
    printf("Your BMI= %.2f\n", n3 );
    printf("BMI VALUES\n");
    printf("Underweight:\tless than 18.5\n");
    printf("Normal:\t\tbetween 18.5 and 24.9\n");
    printf("Overweight:\tbetween 25.0 and 29.9\n");
    printf("Obese:\t\t30 or greater\n");
    system("pause");
    return 0;
}