#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main() {
	int x,y;
	COORD pos = {40,12};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("Hello C3coding");
	getch();
	return 0;
}
//--------------------------------------------------------------------------
int main() {
	int x,y;
	COORD pos = {1,0};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←:커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X = 10;
	pos.Y = 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←:커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X = 20;
	pos.Y = 5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←:커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X = 40;
	pos.Y = 12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←:커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X = 40;
	pos.Y = 24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←:커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	return 0;
}
//--------------------------------------------------------------------------
int main() {
	int x,y;
	COORD pos;
	pos.X = 0;
	pos.Y = 0;
	do
	{
		pos.X = 0;
		pos.Y = 0;
		printf("커서의 위치를 입력해 주세요");
		scanf("%d %d", &pos.X,&pos.Y);
		if (pos.X < 0 || pos.X >80 || pos.Y <0 || pos.Y > 24){
			break;
		}
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("▣");
	}while (pos.X <=80 && pos.Y <= 24);
	return 0;
}
//--------------------------------------------------------------------------
int main() {
	int x,y;
	COORD pos;
	pos.X = 0;
	pos.Y = 0;
	do
	{
		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("좌표 : ");
		scanf("%d %d", &pos.X,&pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%s","♡");

		pos.X = 30;
		pos.Y = 24;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("                    ");
	} while (1);
	return 0;
}
//--------------------------------------------------------------------------
void gotoxy(int x,int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
//--------------------------------------------------------------------------
int main()
{
	int i,s;
	printf("출력 속도 :");
	scanf("%d",&s);
	for (i =1; i<=10 ; i++)
	{
		gotoxy(40,i+1);
		printf("%d",i);
		Sleep(s*100);
	}
	return 0;
}
//--------------------------------------------------------------------------
int main()
{
	int i;
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	for (i =0; i<10 ; i++)
	{
		gotoxy(20+3*i,4);
		printf("%d",arr[i]);
		Sleep(1000);
	}
	return 0;
}
//--------------------------------------------------------------------------
int main()
{
	int i;
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	for (i =0; i<10 ; i++)
	{
		gotoxy(40,i);
		printf("%d",arr[i]);
		Sleep(1000);
	}
	return 0;
}
//--------------------------------------------------------------------------
int main()
{
	int i;
	char c;
	char arr[10] = {'A','B','C','D','E','F','G','H','I'};
	scanf("%c",&c);
	for (i =0; i<9 ; i++)
	{
		if (c == 'R'){
			gotoxy(40+2*i,12);
			printf("%c",arr[i]);
			Sleep(100);
		}
		else if (c == 'L'){
			gotoxy(40-2*i,12);
			printf("%c",arr[i]);
			Sleep(100);
		}
		else if (c == 'U'){
			gotoxy(40,12-i);
			printf("%c",arr[i]);
			Sleep(100);
		}
		else if (c == 'D'){
			gotoxy(40,12+i);
			printf("%c",arr[i]);
			Sleep(100);
		}
	}
	return 0;
}
//--------------------------------------------------------------------------
int main()
{
	int x,y,n,i;
	char sp;
	printf("좌표를 입력해주세요:");
	scanf("%d %d",&x,&y);
	printf("반복 횟수를 입력해주세요:");
	scanf("%d",&n);
	printf("특수문자를 입력해주세요:");
	scanf("%s",&sp);
	for (i = 0; i<n ; i++)
	{
		gotoxy(x+2*i,y);
		printf("%s",sp);
		Sleep(1000);
	}
	return 0;
}
