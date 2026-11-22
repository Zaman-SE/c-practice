#include <stdio.h>

int main()
{
    int n = 2;
    switch(n){
        case 1: printf("1\n");
        case 2: printf("2\n");
        case 3: printf("3\n");
        default: printf("Default\n");
        case 4: printf("4\n");

    }
    switch(7){
        default: printf("default\n");
        case 1: printf("1\n");
        case 7: printf("2\n");
    }

}

