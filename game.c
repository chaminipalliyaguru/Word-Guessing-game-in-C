#include<stdio.h>
#include<string.h>

int main(){
    char word[10]={"india"};
    char guessing_word[100];
    int checking;

    printf("Let's strat.\n\n");

    for(int i=1; i<=5; i++){

        printf("Enter your %d guess: ",i);
        gets(guessing_word);

        checking=strcmp(guessing_word,word);
        if(checking==0){
            printf("Congradulations!");
            break;
        }
        else{
            printf("Incorrect.");
        }
    }
}