#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int j;
    while(j<=10){
        printf("%d\n", j);
        j++;
    }
}*/

/*int main(void){
    int x;
    for(x=0;x<=255;x++){
        printf("\nAscii value %d Character %c", x, x);
    }
    return 0;
}*/
/*int main(void){
    float x = 1.1f;
    while(x>0.0f){
        printf("%f\n", x);
        x = x - 0.1f;
    }
}*/
/*int main(){
    while('1'<'2'){
        printf("Hello");
    }
}*/
/*int main(){
    int x = 4, y = 0, z;
    while(x >= 0){
        if(x == y)
            break;
        else{
            printf("\n%d %d", x, y);
        }
        x--;
        y++;
    }
}*/
/*int main(){
    int num_of_employees = 1, total_payable, hours;

    while(num_of_employees <= 10){
        printf("Enter total hours over-worked for employee %d: ", num_of_employees);
        scanf("%d", &hours);
        total_payable = hours * 12;
        printf("total payable: %d\n", total_payable);
        num_of_employees++;
    }

}*/
/*Factorial

int main(){
    int n, i, factorial=1;
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        factorial = factorial * i;
    }
    printf("%d", factorial);
}*/
/* exponent

int main(){
    int base, exponent, i, result = 1;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);
    for(i=1; i <= exponent; i++){
        result = result * base;
    }
    printf("%d", result);
}*/
/*Ascii values

int main(){
    int x=0;
    while(x<=255){
        printf("Ascii value %d Character %c\n", x, x);
        x++;
    }
}*/

int main(){
    int n=0;
    while(n<=500){
        int temp = n;
        int digits = 0;
        int sum = 0;
        //digits count
        int count = n;
        do{
            digits++;
            count /= 10;
        }while(count != 0);
        //armstrong check
        do{
            int digit = temp % 10;
            int power = 1;
            for(int i = 0; i < digits; i++){
                power *= digit;
            }
            sum+=power;
            temp/=10;
        }while(temp != 0);
        if (sum == n) {
            printf("%d is Armstrong\n", n);
        } else {
            printf("%d is Not Armstrong\n", n);
        }
        n++;
    }
    return 0;
}



















