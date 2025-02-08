#include <stdio.h>
#include <conio.h>

int main() {
	int a,b,c;
	scanf("%d",&a);
	printf("a = %d\n",a);
	scanf("%d %d",&a,&b);
	printf("a = %d b = %d\n",a,b);
	scanf("%d %d %d",&a,&b,&c);
	printf("a = %d b = %d c = %d\n",a,b,c);
	return 0;
}
//------------------------------------------------------------------------------------------------
int main() {
	char ch,ca,cr;
	scanf("%c",&ch);
	printf("%c %d\n",ch,ch);
	scanf("%c%c",&ch,&ca);
	printf("%c %d\n",ch,ch);
	printf("%c %d\n",ca,ca);
	scanf("%c%c%c",&ch,&ca,&cr);
	printf("%c %d\n",ch,ch);
	printf("%c %d\n",ca,ca);
	printf("%c %d\n",cr,cr);
	return 0;
}
//------------------------------------------------------------------------------------------------
int main() {
	char ch1,ch2,ch3;
	ch1= getchar();
	ch2= getchar();
	ch3= getchar();
	printf("ch1 = %d : %c\n",ch1,ch1);
	printf("ch2 = %d : %c\n",ch2,ch2);
	printf("ch3 = %d : %c\n",ch3,ch3);
	return 0;
}
//------------------------------------------------------------------------------------------------
int main() {
	char str[80];
	gets(str);
	printf("%s\n",str);
	puts(str);
	return 0;
}
//------------------------------------------------------------------------------------------------
int main() {
	char ch;
	ch = getche();
	printf("\nch = %d : %c\n",ch,ch);
	putchar(ch);
}
//------------------------------------------------------------------------------------------------
int main() {
	int n = 0;
	while (1)
	{
		printf("%d%c",n,13);
		n++;
	}
	return 0;
}
//------------------------------------------------------------------------------------------------
int main() {
	int age;
	char bty;
	scanf("%d",&age);
	getchar();
	scanf("%c",&bty);
	printf("나이:%d세 혈액형: %c형",age,bty);
}
//------------------------------------------------------------------------------------------------
int main() {
	char c;
	while(1){
		scanf("%c",&c);
		if (c==10){
			break;
		}
	}
}
//------------------------------------------------------------------------------------------------
int main() {
	char c,alpha[101];
	int n=0;
	while(ch!=10){
		scanf("%c",&c);
		if (64<c&&c<91||96<c&&c<123){
			alpha[n] = c;
			n++;
		}
	}
	printf("%s",alpha);
}
//------------------------------------------------------------------------------------------------
int main() {
	char c,str[10001];
	int n;
	while(c!=10){
		scanf("%c",&c);
		if (c>=65 && c<=90)
		{
			str[n] = c;
		}
		else if(c>=97 && c<=122)
		{
			str[n] = c-32;
		}
		n++;
	}
	printf("%s",str);
}
