#include <stdio.h>
#include <stdlib.h>

struct Person{
	char name[10];
	int age;
	double height;
};
int main() {
	int i;
	struct Person list[5] = {{"������",15,178.3},{"������",13,173.3},{"�����",17,183.2},
	{"��ȿ",19,168.9},{"�庸��",13,187.3}};
	for(i = 0;i<5;i++){
		printf("�̸�:%s\n����:%d\nŰ:%.1lf\n",list[i].name,list[i].age,list[i].height);
	}
	return 0;
}
//------------------------------------------------------------------------------------------------------
struct Person{
	char name[10];
	int age;
	double height;
};
int main() {
	int i;
	struct Person list[5] = {};
	for(i = 0;i<5;i++){
		printf("�̸�:");
		scanf("%s",list[i].name);
		printf("����:");
		scanf("%d",&list[i].age);
		printf("Ű:");
		scanf("%lf",&list[i].height);
	}
	printf("--------------------------------------------------------------------\n");
	for(i = 0;i<5;i++){
		printf("�̸�:%s\n����:%d\nŰ:%.1lf\n",list[i].name,list[i].age,list[i].height);
	}
	return 0;
}
//------------------------------------------------------------------------------------------------------
int main(){
	FILE *fp;
	fp = fopen("CharOut.txt", "w");
	if (fp==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	fputc('A',fp);
	fputc('B',fp);
	fputc('\n',fp);
	fputc(97,fp);
	fputc(98,fp);
	fclose(fp);
}
//------------------------------------------------------------------------------------------------------
int main(){
	FILE *fp;
	char ch;
	fp = fopen("CharOut.txt", "r");
	if (fp==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	ch = fgetc(fp);
	printf("%c",ch);
	ch = fgetc(fp);
	putchar(ch);
	fclose(fp);
	return 0;
	
}
//------------------------------------------------------------------------------------------------------
int main(){
	FILE *out = fopen("StringFlie.txt","w");
	char str1[] = "Hello C3Coding";
	char str2[] = "�ȳ��ϼ��� ��ť���ڵ��Դϴ�.\n";
	if (out==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	fputs("���ڿ��� ����մϴ�\n",out);
	fputs(str1,out);
	fputs("\n",out);
	fputs(str2,out);
	fclose(out);
	return 0;
}
//------------------------------------------------------------------------------------------------------
int main(){
	FILE *in = fopen("StringFlie.txt","r");
	char str1[30];
	char str2[30];
	char str3[30];
	if (in==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	fgets(str1,sizeof(str1),in);
	fgets(str2,sizeof(str2),in);
	fgets(str3,sizeof(str3),in);
	puts(str1);
	printf("%s",str2);
	fputs(str3,stdout);
	fclose(in);
	return 0;
}
//------------------------------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------------------------------
int main() {
	char word[48];
	scanf("%s",word);
	int i;
	for (i=0;word[i];i++){
			if (word[i]>=65 && word[i]<=90)
		{
			printf("%c",word[i]);
		}
		else if(word[i]>=97 && word[i]<=122)
		{
			printf("%c",word[i]-32);
		}
	}
}
//------------------------------------------------------------------------------------------------------
int main() {
	char word[48];
	scanf("%s",word);
	int i;
	for (i=0;word[i];i++){
			if (word[i]>=65 && word[i]<=90)
		{
			printf("%c",word[i]+32);
		}
		else if(word[i]>=97 && word[i]<=122)
		{
			printf("%c",word[i]);
		}
	}
}
