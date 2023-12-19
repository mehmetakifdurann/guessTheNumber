// This program is a game. First the program creates a random number between 1-10 (including 1 and 10), then the user tries to guess it.
// Created by Mehmet Akif Duran

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    
    // Variable Decleration(s).
    
    int realNum, guessedNum; // Defining the number that program takes and the users guess.
    
    // Executable Statement(s).
    
    srand (time(NULL));
    
    realNum = 1 + rand() % 10;
    
    do{
        printf("Guess the number (1-10)\n");
            scanf("%d",&guessedNum);
        
        if(realNum<guessedNum){
            printf("Your guess is higher than i think, go down. \n");
            
        }else if(realNum>guessedNum){
            printf("Your guess is lower than i think, go up. \n");
            
        }else
            break;
        
    }while(guessedNum != realNum);
    
    printf("YOU HAVE GUESS THE RIGHT NUMBER\n");
    
    return 0 ;
}
