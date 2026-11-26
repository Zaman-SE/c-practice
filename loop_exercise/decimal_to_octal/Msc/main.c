#include <stdio.h>

int main()
{
    int i = 0;
    while(i++ < 3) printf("%d ", i);
    printf("| i=%d\n", i);
    i=3;
    while(i--) printf("%d ", i);
    printf("| i=%d\n", i);
    while(++i < 3) printf("%d ", i);
    printf("| i=%d\n", i);

}

