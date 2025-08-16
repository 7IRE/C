#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void end();


int main (){
    int number,loop,tries=0,guess;
    srand(time(0));
    number=rand()%100+1;

    printf("Let the Guessing Game Begin\n");
    for(loop=0;loop==0;loop){
        printf("Please Guess a Number(1-100):");
        scanf("%d",&guess);
        if(number>guess){
            printf("Please Guess Higher\n");
            tries++;
        }
        else if(number<guess){
            printf("Please Guess Lower\n");
            tries++;
        }
        else{
            loop==1;
            tries++;
            break;
        }
    }

    printf("--------------------------------------------\n");
    printf("You have correctly guessed %d in %d attempts . \n",number,tries);
    printf("--------------------------------------------\n");
    end();
    return 0;
}

void end(){
    sleep(1);
    printf("Auto-Closing in 3...");
    sleep(1);
    printf("2...");
    sleep(1);
    printf("1...");
    sleep(1);
}