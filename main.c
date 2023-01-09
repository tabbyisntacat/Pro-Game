#include <stdio.h>


int main(){
    int cash;
    int winner = 0;
    printf("You need 300 dollars to buy cocaine\n");
    printf("How much money would u like to have:");
    scanf("%d",&cash);
    while (winner != 1) {
    if (cash >= 300) {
        winner = 1;
        printf("Congrats u won\n");
        break;
    } 
    else{
    printf("incorrect amount, lol idiot");
    break;
    }
    }

    if (winner == 1) {
        printf("Since yu have won, You now owe me head\n\n\n\n");
        printf("This game was really shitly made for memes, the games source code is uploaded to my github\n");
        printf("Github: https://github.com/tabbyisntacat?tab=repositories");
        printf("Press enter to close...");
    }
    getchar(); 
    getchar();
    return 0; 
}
