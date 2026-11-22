#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    if(a == 1)
        if(b == 0)
            printf("One\n");
    else
        printf("Two\n");
    printf("Done\n");

    int marks = 72;
    if(marks >= 80) printf("A+\n");
    else if(marks >= 70) printf("A\n");
    else if(marks >= 60) printf("B\n");
    else printf("below A-\n");
}

