#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main() {
//	int a,b; 
//	scanf("%d %d",&a,&b);
//	printf("%d",a+b);
//	return 0;
//}

//int main() {
//	printf("\"õ��� 1%%�� ������ 99%%�� ������� �̷������\"\n\t-��ӽ� ����");
//	return 0;
//}

//int main() {
//	int a,b;
//	printf("���� 1: ");
//	scanf("%d",&a);
//	printf("���� 2: ");
//	scanf("%d",&b);
//	printf("%d+%d=%d\n",a,b,a+b);
//	printf("%d-%d=%d\n",a,b,a-b);
//	printf("%d*%d=%d\n",a,b,a*b);
//	printf("%d/%d=%d\n",a,b,a/b);
//	return 0;
//}

//int main() {
//	int a;
//	printf("���ڸ� ������ �Է��ϼ���:");
//	scanf("%d",&a);
//	int b = a/100;
//	int c = (a-100*b)/10;
//	int d = a%10;
//	printf("%d+%d+%d=%d",b,c,d,b+c+d);
//	return 0;
//}

int main() {
	int res;
	res = 0 && 0;
	printf("%d\n",res);
	res = 0 && 1;
	printf("%d\n",res);
	res = 1 && 0;
	printf("%d\n",res);
	res = 1 && 1;
	printf("%d\n",res);
	res = 0 || 0;
	printf("%d\n",res);
	res = 0 || 1;
	printf("%d\n",res);
	res = 1 || 0;
	printf("%d\n",res);
	res = 1 || 1;
	printf("%d\n",res);
	
	printf("%d\n",!res);
	return 0;
}
