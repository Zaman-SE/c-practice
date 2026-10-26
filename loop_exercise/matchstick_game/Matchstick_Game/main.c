#include <stdio.h>
#include <stdlib.h>

/*
***Matchstick problem
Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
− After the person picks, the computer does its
picking.
− Whoever is forced to pick up the last matchstick
loses the game.

*/


int main(){
    int matchstick = 21, c_m, p_m, count = 1;;
    while(matchstick > 0){
        printf("Turn %d\n", count);
        printf("Remain %d\n", matchstick);
        printf("Choose a number among 1, 2, 3 or 4\n");
        scanf("%d", &p_m);
        if((p_m == 1 || p_m == 2 || p_m == 3 || p_m == 4) && p_m <= matchstick){
            matchstick = matchstick - p_m;
            if(matchstick == 0){
                printf("Game Over!");
                break;
            }
            printf("Now Computer's turn: \n");
            c_m = 5 - p_m;
            printf("Computer picks: %d\n", c_m);
            matchstick = matchstick - c_m;
            printf("Remain: %d\n", matchstick);
            count++;
        }
        else{
            printf("Invalid Input.");
        }

    }
    return 0;
}
