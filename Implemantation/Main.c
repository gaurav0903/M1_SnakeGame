#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

#include "game.h"

extern int gameover;

void main()
{ 
	int n1,n2;

	
	boundary();

	while (!gameover) {

		
		draw(); 
		input();
		logic();
	}
}
