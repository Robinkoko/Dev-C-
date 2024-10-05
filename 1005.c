#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d\n",a*(b%10));
	printf("%d\n",a*((b%100)/10));
	printf("%d\n",a*(b/100));
	printf("%d\n",a*b);
	return 0;
}
