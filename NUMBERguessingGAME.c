#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
int random_number,guessing_number;
int no_of_guess=0;
srand(time(NULL));
random_number=rand()%100 + 1;

    printf("======================================================\n");
    printf("||                                                  ||\n");
    printf("||     ** WELCOME TO THE ULTIMATE GAME **           ||\n");
    printf("||          NUMBER GUESSING GAME!                   ||\n");
    printf("||                                                  ||\n");
    printf("======================================================\n");
    printf("||                                                  ||\n");
    printf("||      Get ready, set, and start guessing!         ||\n");
    printf("||                                                  ||\n");
    printf("======================================================\n");


  do{
   printf("PLEASE ENTER YOUR GUESS BETWEEN(1 TO 100).\n");
   scanf("%d",&guessing_number);
   no_of_guess++;

   if(guessing_number>random_number){
    printf("Ohh.Sorry you not guess right,GUESS A SMALL NUMBER.\n");
   }
   else if(guessing_number<random_number){
    printf("Ohh.Sorry you not guess right,GUESS A LARGER NUMBER.\n");
   }
   else{
    printf("******************************************************\n");
    printf("**                                                  **\n");
    printf("**       Congratulations! You guessed the number!   **\n");   
    printf("**                                                  **\n");
    printf("******************************************************\n");
    printf("**                                                  **\n");
    printf("**  It took you %d attempts to guess the number.     **\n", no_of_guess);
    printf("**  Great job! Thanks for playing.                  **\n");
    printf("**                                                  **\n");
    printf("******************************************************\n");
   }
}while(guessing_number!=random_number);

 }
   

