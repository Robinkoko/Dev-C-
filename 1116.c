#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	n = 2;
	switch(1)
	{
		case 0:
			printf("영입니다.");
			break;
		case 1:
			printf("일입니다.");
			break;
		case 2:
			printf("이입니다.");
			break;
		case 3:
			printf("삼입니다.");
			break;
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n;
	scanf("%d", &n);
	if (n%3==0)
	{
		printf("%d는 3의 배수입니다",n);
	}
	else
	{
		printf("%d는 3의 배수가 아닙니다",n);
	}
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n;
	scanf("%d", &n);
	switch(n%3)
	{
		case (0):
			printf("%d는 3의 배수입니다",n);
			break;
		default:
			printf("%d는 3의 배수가 아닙니다",n);
			break;
	}
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n;
	scanf("%d", &n);
	if (n/10==0)
	{
		printf("%d는 1자리 수입니다",n);
	}
	else
	{
		printf("%d는 2자리 수입니다",n);
	}
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n;
	scanf("%d", &n);
	switch(n/10)
	{
		case (0):
			printf("%d는 1자리 수입니다",n);
			break;
		default:
			printf("%d는 2자리 수입니다",n);
			break;
	}
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n;
	scanf("%d", &n);
	switch(n/10)
	{
		case (0):
			printf("유소년");
			break;
		case (1):
			 printf("청소년");
			break;
		case (2):
			printf("청년");
			break;
		case (3):
			printf("청년");
			break;
		case (4):
			printf("중년");
			break;
		case (5):
			printf("중년");
			break;
		case (6):
			printf("장년");
			break;
		case (7):
			printf("노년");
			break;
		case (8):
			printf("노년");
			break;
		case (9):
			printf("도전 백세");
			break;
		default:
			printf("성공 백세");
			break; 
	}
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int kor,eng,sci,math,avr;
	scanf("%d", &kor);
	scanf("%d", &eng);
	scanf("%d", &sci);
	scanf("%d", &math);
	avr = (kor+eng+sci+math)/4;
	switch(avr/10)
	{
		case (10):
			printf("참 잘했어요\n");
			break;
		case (9):
			printf("참 잘했어요\n");
			break;
		case (8):
			 printf("잘했어요\n");
			break;
		case (7):
			printf("화이팅\n");
			break;
		default:
			printf("힘내요, 할 수 있어요\n");
			break; 
	}
	printf("총점: %d점\n",kor+eng+sci+math);
	printf("평균: %d점\n",avr);
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int even=0,odd=0,i=1;
	while(i<=10)
	{
		if (i%2==0)
		{
			even+=i;
		}
		else
		{
			odd+=i;
		}
		i++;
	}
	printf("짝수의 합: %d  홀수의 합 : %d",even,odd);
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n,i=1;
	scanf("%d", &n);
	while (i<=n)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n,i=1,sum=0;
	while(i<=10)
	{
		scanf("%d",&n);
		if (n>sum)
		{
			sum = n;
		}
		i++;
	}
	printf("%d",sum);
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n,i=1,sum=0,amt=0;
	scanf("%d", &n);
	while (i<=n)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			sum+= i;
			amt++;
		}
		i++;
	}
	printf("\n약수의 개수 : %d  약수의 합: %d", amt,sum);
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n,i,sum=1,f;
	printf("입력:");
	scanf("%d", &n);
	f=n;
	while (1)
	{
		if (n>=10)
		{
			n = n/10;
			sum++;
		}
		else
		{
			break;
		}
	}
	printf("%d는 %d자리 수입니다.",f,sum);
	
}
//---------------------------------------------------------------------------------------------------------------------

