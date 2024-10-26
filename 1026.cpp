#include <stdio.h>

int main()
{
	int a,b,c;
	a= 12;
	b=56;
	c= a>b;
	if(c)
	{
		printf("%d는 %d보다 크다\n",a,b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다\n",a,b);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int num;
	printf("10000미만 정수 입력:");
	scanf("%d",&num);
	if(num<10)
	{
		printf("한 자리 수\n");
	} 
	else if(num<100)
	{
		printf("두 자리 수\n");
	} 
	else if(num<1000)
	{
		printf("세 자리 수\n");
	}
	else if(num<10000)
	{
		printf("네 자리 수\n");
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
		printf("양수");
	}
	else if (a==0)
	{
		printf("0");
	}
	else
	{
		printf("음수");
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
		printf("짝수");
	}
	else
	{
		printf("홀수");
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
		printf("%d는 3의 배수",a);
	} 
	else 
	{
		printf("%d는 3의 베수가 아니다",a);
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
			printf("%d는 %d로 나누어 떨어진다",a,b);
		}
		else
		{
			printf("%d는 %d로 나누어 떨어지지 않는다",a,b);
		}
	}
	else
	{
		if (b%a==0)
		{
			printf("%d는 %d로 나누어 떨어진다",b,a);
		}
		else
		{
			printf("%d는 %d로 나누어 떨어지지 않는다",b,a);
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
		printf("%d는 2와 3의 공배수이다",a);
	}
	else
	{
		printf("%d는 2와 3의 공배수가 아니다",a);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a;
	printf("정수 입력:");
	scanf("%d",&a);
	if (12%a==0 && 30%a==0)
	{
		printf("%d는 12와 30의 공약수이다",a);
	}
	else
	{
		printf("%d는  12와 30의 공약수가 아니다",a);
	}
}
//------------------------------------------------------------------------------------------------
int main()
{
	int a,b;
	printf("정수1 입력:");
	scanf("%d",&a);
	printf("정수2 입력:");
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
