#include <stdio.h>

int main()
{
    char ch = 'E';
    switch(ch | 32){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a vowel", ch); break;
        default: printf("%c is a constant");
    }

}

