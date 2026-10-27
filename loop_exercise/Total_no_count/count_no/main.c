#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_numbers, count = 0, number, positive_count = 0, negative_count = 0, zero_count = 0;
    printf("Total Numbers we are going to have is: ");
    scanf("%d", &total_numbers);
    while(count < total_numbers){
        printf("Enter Number: ");
        scanf("%d", &number);
        if(number > 0){
            positive_count++;
        }
        else if(number < 0){
            negative_count++;
        }
        else{
            zero_count++;
        }
        count++;
    }
    printf("Total positive number: %d\n", positive_count);
    printf("Total negative number: %d\n", negative_count);
    printf("Total zero: %d\n", zero_count);
    return 0;
}
