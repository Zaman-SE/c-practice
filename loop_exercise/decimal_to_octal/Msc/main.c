#include <stdio.h>

int main()
{
    int i, count = 0;
    for(i = 2; i <= 10; i += 4){
        count++;
    }
    printf("%d %d", count, i);

}

