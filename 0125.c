#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define PI 3.141592
#define C3C "��ť���ڵ�"
#define PRN printf
#define MACRO "##��ũ�� ���##\n"
#define SUM(n,m) ((n)+(m))
#define SUB(s,b) ((s)-(b))

int main(){
	FILE *out = fopen("NumberFlie.txt","w");
	int n,m;
	double d1,d2;
	if (out==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	printf ("������ �� �� �Է��ϼ���: ");
	scanf("%d %d", &n, &m);
	printf ("�Ǽ��� �� �� �Է��ϼ���: ");
	scanf("%lf %lf",&d1,&d2);
	printf("\n\n\n�Է¹��� ������ ��� ��µǾ����ϴ�\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	fprintf(out,"%d %d\n",n,m);
	fprintf(out,"%lf %lf\n",d1,d2);
	fclose(out);
	return 0;
}
//-----------------------------------------------------------------------------
int main(){
	FILE *in = fopen("NumberFlie.txt","r");
	int n,m;
	double d1,d2;
	if (in==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	printf ("������ �� �� �Է��մϴ�\n");
	fscanf(in,"%d %d", &n, &m);
	printf ("�Ǽ��� �� �� �Է��մϴ�\n");
	fscanf(in,"%lf %lf",&d1,&d2);
	printf("\n�Է¹��� ������ ��� ����մϴ�\n");
	printf("%d %d\n",n,m);
	printf("%lf %lf\n",d1,d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("��� �Է� �޾������?\n");
	fclose(in);
	return 0;
}
//-----------------------------------------------------------------------------
int main(){
	int n,num;
	char *res,str[20];
	printf("���� �Է� : ");
	n = getchar();
	printf("n = %d\n",n);
	printf("���ڿ� �Է�");
	res = gets(str);
	printf("res = %d\n",res);
	printf("���� �Է� : ");
	n = scanf("%d",n);
	printf("n = %d",n);
	return 0;
}
//------------------------------------------------------------------------------
int main(){
	FILE *out = fopen("FavoriteJuice.txt","w");
	int l,p;
	char juice[20];
	if (out==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	printf ("�̸� : ");
	scanf("%s", juice);
	printf ("�뷮(ml) : ");
	scanf("%d",&l);
	printf ("����(��) : ");
	scanf("%d",&p);
	printf("\n\n\n�Է¹��� ������ ��� ��µǾ����ϴ�\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	fprintf(out,"�̸�: %s\n",juice);
	fprintf(out,"�뷮: %dml\n����: %d��",l,p);
	fclose(out);
	return 0;
}
//------------------------------------------------------------------------------
int main() 
{
	int a,b;
	a= 12;
	b=20;
	printf("a=%d,b=%d\n",a,b);
	{
		int a,c;
		a =30;
		c=50;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
		a=90;
		b=45;
		c=75;
	}
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
//------------------------------------------------------------------------------
void PrintFun1(int m, int n);
void PrintFun2(int m, int n);
int main()
{
	int m,n;
	m=10;
	n=30;
	printf("main before : m = %d n = %d\n",m,n);
	PrintFun1(m,n);
	printf("main after : m = %d n = %d\n",m,n);
	return 0;
}
void PrintFun1(int m,int n)
{
	printf("fun1 before : m = %d n = %d\n",m,n);
	m=m+50;
	n=n*10;
	PrintFun2(m,n);
	printf("fun1 after : m = %d n = %d\n",m,n);
}
void PrintFun2(int m,int n)
{
	printf("fun2 before : m = %d n = %d\n",m,n);
	m=m+50;
	n=n*10;
	printf("fun2 after : m = %d n = %d\n",m,n);
}
//------------------------------------------------------------------------------
int main()
{
	PRN(MACRO);
	PRN("MAX =%d\n",MAX);
	PRN("PI=%lf\n",PI);
	PRN("C3C = %s\n",C3C);
	PRN("%d\n",SUM(3,8));
	PRN("%lf\n",SUM(3.6,8.34));
	PRN("%d\n",SUB(13,5));
	PRN("%lf\n",SUB(4.2,3.4));
}
