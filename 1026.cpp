#include <stdio.h>

int main()
{
	int a,b,c;
	a= 12;
	b=56;
	c= a>b;
	if(c)
	{
		printf("%d�� %d���� ũ��\n",a,b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�\n",a,b);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int num;
	printf("10000�̸� ���� �Է�:");
	scanf("%d",&num);
	if(num<10)
	{
		printf("�� �ڸ� ��\n");
	} 
	else if(num<100)
	{
		printf("�� �ڸ� ��\n");
	} 
	else if(num<1000)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<10000)
	{
		printf("�� �ڸ� ��\n");
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	printf("type int:");
	scanf("%d",&a);
	if (a>0)
	{
		printf("���");
	}
	else if (a==0)
	{
		printf("0");
	}
	else
	{
		printf("����");
	} 
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	printf("type int:");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	} 
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	printf("type int:");
	scanf("%d",&a);
	if (a%3==0)
	{
		printf("%d�� 3�� ���",a);
	} 
	else 
	{
		printf("%d�� 3�� ������ �ƴϴ�",a);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>b)
	{
		if (a%b==0)
		{
			printf("%d�� %d�� ������ ��������",a,b);
		}
		else
		{
			printf("%d�� %d�� ������ �������� �ʴ´�",a,b);
		}
	}
	else
	{
		if (b%a==0)
		{
			printf("%d�� %d�� ������ ��������",b,a);
		}
		else
		{
			printf("%d�� %d�� ������ �������� �ʴ´�",b,a);
		}
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	float a;
	printf("input float : ");
	scanf("%f",&a);
	if (a>0)
	{
		printf("%f",a);
	}
	else
	{
		printf("%f",a*-1);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	float a,b,c,d,e,big1,big2,big3;
	printf("input float1 : ");
	scanf("%f",&a);
	printf("input float2 : ");
	scanf("%f",&b);
	printf("input float3 : ");
	scanf("%f",&c);
	printf("input float4 : ");
	scanf("%f",&d);
	printf("input float5 : ");
	scanf("%f",&e);
	if (a>b)
	{
		big1 = a;
	}
	else
	{
		big1 = b;
	}
	if (c>d)
	{
		big2=c;
	}
	else
	{
		big2=d;
	}
	if (big1>big2)
	{
		big3 = big1
	}
	else
	{
		big3 = big2
	}
	if (big3>e)
	{
		printf(big3)
	}
	else
	{
		printf(e)
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	print("input int:");
	if (a%3==0 && a%2==0);
	{
		printf("%d�� 2�� 3�� ������̴�",a);
	}
	else
	{
		printf("%d�� 2�� 3�� ������� �ƴϴ�",a);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	printf("���� �Է�:");
	scanf("%d",&a);
	if (12%a==0 && 30%a==0)
	{
		printf("%d�� 12�� 30�� ������̴�",a);
	}
	else
	{
		printf("%d��  12�� 30�� ������� �ƴϴ�",a);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a,b;
	printf("����1 �Է�:");
	scanf("%d",&a);
	printf("����2 �Է�:");
	scanf("%d",&b);
	if (a%2==0 && b%2==0)
	{
		printf("%d",a*b);
	}
	else if (a%2==1 && b%2==1)
	{
		printf("%d",a+b);
	}
	else
	{
		if (a>b)
		{
			printf("%d",a-b);
		}
		else
		{
			printf("%d",b-a);
		}
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90)
	{
		printf("A");
	}
	else if (a>=80)
	{
		printf("B");
	}
	else if (a>=70)
	{
		printf("C");
	}
	else if (a>=60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>0&&b>0)
	{
		printf("1");
	}
	else if (a<0&&b>0)
	{
		printf("2");
	}
	else if (a<0&&b<0)
	{
		printf("3");
	}
	else if (a>0&&b<0)
	{
		printf("4");
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int H,M;
	scanf("%d",&H);
	scanf("%d",&M);
	if (M<45)
	{
		printf("%d %d",H,M-45);
	}
	else
	{
		printf("%d %d",H-1,M+15);
	}
}
