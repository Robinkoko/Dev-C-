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
//	printf("\"천재는 1%%의 영감과 99%%의 노력으로 이루어진다\"\n\t-토머스 에디슨");
//	return 0;
//}

//int main() {
//	int a,b;
//	printf("정수 1: ");
//	scanf("%d",&a);
//	printf("정수 2: ");
//	scanf("%d",&b);
//	printf("%d+%d=%d\n",a,b,a+b);
//	printf("%d-%d=%d\n",a,b,a-b);
//	printf("%d*%d=%d\n",a,b,a*b);
//	printf("%d/%d=%d\n",a,b,a/b);
//	return 0;
//}

//int main() {
//	int a;
//	printf("세자리 정수를 입력하세요:");
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
