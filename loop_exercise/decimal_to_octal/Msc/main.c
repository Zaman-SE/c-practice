#include <stdio.h>

int main()
{
    int a = 49, b = 37;
    a ^= b;b ^= a;a ^= b;
    printf("%d %d", a, b);

}
