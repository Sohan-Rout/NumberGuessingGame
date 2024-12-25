#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int randomNumber, guessNumber;
    int numberOfGuesses = 0;
    srand(time(NULL));

    printf("-------------------------------------\n");
    printf("Welcome to the Number Guessing Game.\n");
    printf("-------------------------------------\n");
    randomNumber = rand() % 100 + 1;

    do {
        printf("\nplease input a number between 1 to 100 : ");
        scanf("%d", &guessNumber);
        printf("-------------------------------------\n");
        numberOfGuesses++;

        if(guessNumber<=100 && guessNumber>=0){
            if(guessNumber > randomNumber){
                printf("\tThe number is too high.\n");
            }  
            else if(guessNumber < randomNumber){
                printf("\tThe number is too low.\n");
            }
            else {
                printf("\n!!!Congratulations!!! You have guessed the number in %d guesses\n", numberOfGuesses);
            }
        }

        else{
            printf("\tPlease input a number between 1 to 100.\n");
        }
    } while (guessNumber != randomNumber);

    printf("\n------Thanks for playing!------");
    printf("\n----Developed By SOHAN ROUT----");

    return 0;
}