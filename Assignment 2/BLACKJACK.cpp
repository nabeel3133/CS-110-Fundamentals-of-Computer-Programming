#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main()

{
	
    char choice[20];
srand(time(NULL));

printf("                                           --------------------------------------\n");
printf("                                           |WELCOME TO SIMPLE BLACKJACK PROGRAM!|\n");
printf("                                           --------------------------------------\n\n");

int playerCard1=2+rand()%9;
int playerCard2=2+rand()%9;
int playerTotal=playerCard1+playerCard2;
printf("You get a %d and a %d.",playerCard1,playerCard2);
printf("\nYour total is %d.",playerTotal);

int dealerCard1=2+rand()%9;
int dealerCard2=2+rand()%9;
int dealerTotal=dealerCard1+dealerCard2;
printf("\n\nThe dealer has a %d showing, and a hidden card.",dealerCard1);
printf("\nHis total is hidden, too.");

do {
printf("\n\nWould you like to \"hit\" or \"stay\"? ");
gets(choice);
	if(strcmp(choice,"hit")==0)
{
	int playerCard3 = 2 + rand()%9;
	playerTotal += playerCard3;
	printf( "\nYou drew a %d.", playerCard3 );
	printf( "\nYour total is %d.", playerTotal );
	if(playerTotal>21)
	{	
	printf("\n\nYOU LOOSE!");
	return 0;
	}
	}
	if(strcmp(choice,"stay")==0)
    break;
}while(strcmp(choice,"hit")==0);
 	
  	printf("\nOkay, dealer's turn.");
  	printf("\nHis hidden card was a %d",dealerCard2);
  	printf("\nHis total was %d.",dealerTotal);
  	if(dealerTotal>21)
  	{
  	printf("\n\nYOU WIN!");
  	return 0;
    }
	for(;dealerTotal<=16;)
	{
	printf("\n\nDealer chooses to hit.\n");
	int dealerCard3=2+rand()%9;
	dealerTotal+=dealerCard3;
	printf( "He draws a %d.\n", dealerCard3 );
	printf( "His total is %d.\n", dealerTotal );
	if(dealerTotal>21)
	{
	printf("\n\nYOU WIN!");
	return 0;
	}
	}
    printf ("\nDealer stays.\n");

	printf("\nDealer total is %d.",dealerTotal);
	printf("\nYour total is %d.",playerTotal);
	if(playerTotal>dealerTotal)
	printf("\n\nYOU WIN!");
	else if(dealerTotal>playerTotal)
	printf("\n\nYOU LOOSE!");
        else if (playerTotal==dealerTotal)
        printf ("\n\nDealer wins");
	return 0;
    }
