#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); 
    int n=rand()%6+1;
    int guess=0;
    int ch;
    printf("welcome to the number guessing game\n");
    printf("1. start the game\n2. exit\n");
    scanf("%d",&ch);
    if(ch==1)
    {
    printf("Guess the number between 1-6\n");
    while(guess!=n)
    {
       scanf("%d",&guess);
       if(guess>n)
       {
          printf("Too hight! failed...\n");
       }
       else if(guess<n)
       {
          printf("too low! failed...\n");
       }
       else
       {
          printf("congratulations!\n you have won the match");
       }
    }
    }
    else if(ch==2)
    {
       printf("you have cancelled the game");
       return 0;
    }
    else
    {
       printf("invalid input");
    }
 
}