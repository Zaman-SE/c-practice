#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d", &a);
    if(a >= 1000 && a <= 9999){
        b = a % 10;
        c = (a / 10) % 10;
        d = (a / 100) % 10;
        e = a / 1000;
        printf("%d", b + c + d + e);
    }else{
        printf("Please input a 4 digit number");
    }


}

