#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char another;
    do{
        printf("Enter a Number\n");
        scanf("%d", &n);
        printf("Square of %d is %d", n, n * n);
        printf("Want to Enter another one/n");
        scanf("%c", &another);
    }while(another == "y");

}
