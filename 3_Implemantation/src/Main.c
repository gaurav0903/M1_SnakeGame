#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * @file Main.c
 * @author Gaurav (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
