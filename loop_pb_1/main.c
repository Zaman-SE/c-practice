#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n, count;
    float si, r;
    count = 1;
    while(count<=3){
        printf("Enter values of p, n & r: ");
        scanf("%d%d%f", &p, &n, &r);
        si = p * n* r /100;
        printf("%f\n", si);
        count = count + 1;
    }
    return 0;
}
