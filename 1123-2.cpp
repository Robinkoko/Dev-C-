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
	printf("�ȳ��ϼ��� �� �̸��� OOO �Դϴ�\n");
	printf("���� �ѱ� ����̿���\n");
	printf("���� C�� �����մϴ�\n");
	printf("�� ��Ź�帳�ϴ�\n");
	printf("�����մϴ�\n");
}
void hobby()
{
	printf("�� ��̴� �����Դϴ�(?)\n");
	printf("�ƹ�ư �����Դϴ�\n");
	printf("�� ���� �´ٰ����Ƥäÿ�ƿ���ň�\n"); 
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
	printf("�ȳ��ϼ��� �� �̸��� OOO �Դϴ�\n");
	printf("���� �ѱ� ����̿���\n");
	printf("���� C�� �����մϴ�\n");
	printf("�� ��Ź�帳�ϴ�\n");
	printf("�����մϴ�\n");
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
	pritnf("����� ���̴�? : ")
	scanf("%d",&i);
	myage(i);
}
void myage(int age)
{
	printf("����� ���̴�%d�� �Դϴ�",result);
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
