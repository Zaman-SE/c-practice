#include <stdio.h>

int main()
{
    double fahrenheit, celcius;
    printf("Enter Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("%.2lf", celcius);
    return 0;

}
