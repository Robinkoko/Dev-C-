#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	n = 2;
	switch(1)
	{
		case 0:
			printf("���Դϴ�.");
			break;
		case 1:
			printf("���Դϴ�.");
			break;
		case 2:
			printf("���Դϴ�.");
			break;
		case 3:
			printf("���Դϴ�.");
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
		printf("%d�� 3�� ����Դϴ�",n);
	}
	else
	{
		printf("%d�� 3�� ����� �ƴմϴ�",n);
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
			printf("%d�� 3�� ����Դϴ�",n);
			break;
		default:
			printf("%d�� 3�� ����� �ƴմϴ�",n);
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
		printf("%d�� 1�ڸ� ���Դϴ�",n);
	}
	else
	{
		printf("%d�� 2�ڸ� ���Դϴ�",n);
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
			printf("%d�� 1�ڸ� ���Դϴ�",n);
			break;
		default:
			printf("%d�� 2�ڸ� ���Դϴ�",n);
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
			printf("���ҳ�");
			break;
		case (1):
			 printf("û�ҳ�");
			break;
		case (2):
			printf("û��");
			break;
		case (3):
			printf("û��");
			break;
		case (4):
			printf("�߳�");
			break;
		case (5):
			printf("�߳�");
			break;
		case (6):
			printf("���");
			break;
		case (7):
			printf("���");
			break;
		case (8):
			printf("���");
			break;
		case (9):
			printf("���� �鼼");
			break;
		default:
			printf("���� �鼼");
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
			printf("�� ���߾��\n");
			break;
		case (9):
			printf("�� ���߾��\n");
			break;
		case (8):
			 printf("���߾��\n");
			break;
		case (7):
			printf("ȭ����\n");
			break;
		default:
			printf("������, �� �� �־��\n");
			break; 
	}
	printf("����: %d��\n",kor+eng+sci+math);
	printf("���: %d��\n",avr);
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
	printf("¦���� ��: %d  Ȧ���� �� : %d",even,odd);
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
	printf("\n����� ���� : %d  ����� ��: %d", amt,sum);
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------
int main()
{
	int n,i,sum=1,f;
	printf("�Է�:");
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
	printf("%d�� %d�ڸ� ���Դϴ�.",f,sum);
	
}
//---------------------------------------------------------------------------------------------------------------------

