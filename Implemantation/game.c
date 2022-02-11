#include<stdio.h>
#include<stdlib.h>
#include"game.h"

int i, j, h = 24, w = 24;
static int gameover;
int score;
int x, y, a, b, flag;

void boundary()
{
	gameover = 0;
	x = h/ 2;
	y = w/ 2;
label1:
	a = rand() % 24;
	if (a == 0)
		goto label1;
label2:
	b = rand() % 24;
	if (b == 0)
		goto label2;
	score = 0;
}

void draw()
{
	system("cls");
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			if (i == 0 || i == w- 1 || j == 0 || j == h - 1) {
				printf("#");
			}
			else {
				if (i == x && j == y)
					printf("0");
				else if (i == a
						&& j == b)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf(" Your score = %d", score);
	printf("\n");
	printf("press X to quit");
}

void input()
{
	if (kbhit()) {
		switch (getch()) {
		case 'a':
			flag = 1;
			break;
		case 's':
			flag = 2;
			break;
		case 'd':
			flag = 3;
			break;
		case 'w':
			flag = 4;
			break;
		case 'x':
			gameover = 1;
			break;
		}
	}
}

void logic()
{
	sleep(0.01);
	switch (flag) {
	case 1:
		y--;
		break;
	case 2:
		x++;
		break;
	case 3:
		y++;
		break;
	case 4:
		x--;
		break;
	default:
		break;
	}


	if (x < 0 || x > h || y < 0 || y > w)
		{gameover = 1;}


	if (x == a && y == b) {
	label3:
		a = rand() % 24;
		if (a == 0)
			goto label3;


	label4:
		a = rand() % 24;
		if (b == 0)
			goto label4;
		score += 10;
	}
}
