#include <stdio.h>

int main()
{
    int i = 10;
    while(i < 5) printf("Never");
    do printf("do while runs once, i=%d\n", i); while (i < 5);
    for(i = 1; i <= 5; i++) printf("%d ", i);
    printf("| after loop i=%d\n", i);

}

