#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

#include "game.h"

extern int gameover;

void main()
{ 
	int I;

	system("cls");

	printf("**************************************");
	printf("\n**								**");
	printf("\n**		  WELCOME	       	    **");
	printf("\n**			 TO			        **");
	printf("\n**	    THIS SNAKE GAME!!	    **");
	printf("\n**					 		    **");
	printf("\n**								**");
	printf("\n**								**");
	printf("\n**************************************");
	printf("\n\n\nPress 1 to Start the Game else 2");
	scanf("%d", &I);
	if(I==1)
	{
	set();

	while (!gameover) {

		
		draw(); 
		input();
		logic();
	}
	}
	else{
		return 0;
	}
}
