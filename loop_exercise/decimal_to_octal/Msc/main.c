#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n > 0 && ((n & n - 1) != 0)){
        printf("The number is not a power of two");
    }else{
        printf("The number is a power of two");
    }
}
