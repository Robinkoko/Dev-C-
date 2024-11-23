# include <stdio.h>

void plus()
{
	int a = 3;
	int b = 2;
	
	printf("%d",a+b);
}
int main()
{
	plus();
}
//-----------------------------------------------------------------------------
void introduce()
{
	printf("안녕하세요 제 이름은 OOO 입니다\n");
	printf("저는 한국 사람이에요\n");
	printf("저는 C언어를 공부합니다\n");
	printf("잘 부탁드립니다\n");
	printf("감사합니다\n");
}
void hobby()
{
	printf("제 취미는 공부입니다(?)\n");
	printf("아무튼 공부입니다\n");
	printf("아 공부 맞다공나아ㅓㅓ우늠여어ㅕ댬\n"); 
}
int main() 
{
	introduce();
	hobby();
	return 0;
}
//-----------------------------------------------------------------------------
void introduce();
int main() 
{
	introduce();
	return 0;
}
void introduce()
{
	printf("안녕하세요 제 이름은 OOO 입니다\n");
	printf("저는 한국 사람이에요\n");
	printf("저는 C언어를 공부합니다\n");
	printf("잘 부탁드립니다\n");
	printf("감사합니다\n");
}
//-----------------------------------------------------------------------------
void Div(int index, int value);

int main()
{
	Div();
}
void Div(int index, int value)
{
	int result
	result = index / value;
	printf("%d",result);
}
//-----------------------------------------------------------------------------
void myage(int age);

int main()
{
	int i;
	pritnf("당신의 나이는? : ")
	scanf("%d",&i);
	myage(i);
}
void myage(int age)
{
	printf("당신의 나이는%d살 입니다",result);
}
//-----------------------------------------------------------------------------
int plus()
{
	int a = 3;
	int b = 2;
	return a+b;
}
int main()
{
	int num = plus();
	printf("%d",num);
	printf("%d",plus());
	printf("%d",plus()+10);
}
