#include <stdio.h>

int main()
{
    int a = 49, b = 87;
    a ^= b;b ^= a;a ^= b;
    printf("%d %d", a, b);

}
