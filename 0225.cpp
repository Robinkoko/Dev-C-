#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define X_end 79
#define Y_end 24

int main() {
	int ch1,ch2;
	
	ch1 = getch();
	ch2 = getch();
	
	printf("%d %d\n",ch1,ch2);
	printf("%x %x\n",ch1,ch2);
	
	return 0;
}
//----------------------------------------------
int main() {
	unsigned char ch;
	
	do
	{
		ch = getch();
		printf("%d %x : %c\n",ch,ch,ch);
	} while (ch != 13);
	return 0;
}
//----------------------------------------------
void gotoxy(int x, int y);
void move_LeftRight_Key(char chr,int *x,int *y);

int main()
{
	char key;
	int x = 0, y = 0;
	do
	{
		gotoxy(x,y);
		printf("@");
		key = getch();
		key = getch();
		move_LeftRight_Key(key, &x, &y);
	} while (key != 27);
}
void gotoxy(int x,int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void move_LeftRight_Key(char key,int *x1,int *y1)
{
	switch (key)
	{
	case 75:
		*x1 = *x1 - 1;
		if (*x1 < 1) *x1 = X_end;
		break;
	case 77:
		*x1 = *x1 +1;
		if(*x1 > X_end) *x1 = 1;
		break;
	case 72:
		*y1 = *y1 - 1;
		if (*y1 < 1) *y1 = Y_end;
		break;
	case 80:
		*y1 = *y1 +1;
		if(*y1 > Y_end) *y1 = 1;
		break;
	}

}
//----------------------------------------------
void gotoxy(int x, int y);
void move_UpDown_Key(char key,int *x,int *y);

int main()
{
	char key;
	int x = 40, y = 0;
	do
	{
		gotoxy(x,y);
		printf("♥");
		key = getch();
		key = getch();
		move_UpDown_Key(key, &x, &y);
	} while (key != 27);
}
void gotoxy(int x,int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void move_UpDown_Key(char key,int *x,int *y)
{
	switch (key)
	{
	case 72:
		*y = *y - 1;
		if (*y < 1) *y = Y_end;
		break;
	case 80:
		*y = *y +1;
		if(*y > Y_end) *y = 1;
		break;
	}
}
//----------------------------------------------
void gotoxy(int x, int y);

int main()
{
	srand(time(NULL));
	int x,y=5;
	char crr[7] ={'●','★','■','▲','♠','♥','♣'};
	int value = 0;
	for (x =1;x<80;x+=2)
	{
		value = rand()%7+1;
		system("cls");//콘솔창 내용 지우기 
		gotoxy(x,y);
		printf("%c",crr[value]);
		Sleep(100);
	}
	printf("\n");
}
void gotoxy(int x,int y)
{
	COORD pos = {x-1,y-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

