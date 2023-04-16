#include<stdio.h>
#include<string.h>

int main(){
    char word[10]={"india"};
    char guessing_word[100];
    int checking;

    printf("Let's play a game! The objective of the game is to guess secret word. You will have five chances to guess.\nHint: It is a country name. ");
    printf("\nLet's get started!\n\n");

    for(int i=1; i<=5; i++){

        printf("Enter your %d guess: ",i);
        gets(guessing_word);

        checking=strcmp(guessing_word,word);
        if(checking==0){
            printf("\n\nCongradulations! You guessed the secret word!");
            break;
        }
        else{
            printf("\n\nSorry. That is not the correct word word. Please guess again.\n");
        }
    }
}