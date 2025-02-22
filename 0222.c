#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	char c1 = 'A';//65
	char c2 = 'B';//66
	
	printf("%d\n",c1+c2);//131
	printf("%d\n",c1>c2);//0
	printf("%d\n",c1=='A');//1
	printf("%d\n",'b'>c2);//1
	printf("%d\n",'a'-c2);//31
}
//------------------------------------------------------------------------------------------------
int main()
{
	char str1[] = "C3coding";
	char str2[10] = "C3coding";
	printf("%d\n",str1 ==str2);
	printf("%d\n",str1 =="C3coding");
	printf("%d\n",str2 =="C3coding");
	printf("%d\n","C3coding" =="C3coding");
	printf("%d\n",str1 =="C3coding");
}
//------------------------------------------------------------------------------------------------
int main()
{
	char *sp = "C3coding";
	char str[] = "C3coding";
	int res;
	res = strcmp(sp,str);
	printf("%d\n",res);
	res = strcmp(sp,"C3coding");
	printf("%d\n",res);
	res = strcmp("C3coding","C3coding");
	printf("%d\n",res);
	
	res = strcmp("test","text");
	printf("%d\n",res);
	res = strcmp("text","test");
	printf("%d\n",res);
	
	return 0;
}
//------------------------------------------------------------------------------------------------
int main()
{
	char name1[10];
	char name2[10];
	
	strcpy(name1,"가");
	strcpy(name2,"나");
	printf("%d\n",strcmp(name1,name2));
	printf("%d\n",strcmp("가","나"));
	
}
//------------------------------------------------------------------------------------------------
int main()
{
	
	char start[15] = "C3";
	char end[15] = "coding";
	int len;
	
	printf("start = %s %d\n",start,strlen(start));
	printf("end = %s %d\n", end,strlen(end));
	strcat(start,end);
	len = strlen(start);
	printf("%s %d\n",start,len);
 }
//------------------------------------------------------------------------------------------------
int main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int *pr;
	pr = (int *)malloc(sizeof(int)*20);
	printf("%d %d %d\n",sizeof(ar),sizeof(ar[0]),sizeof(int));
	for (i = 0;i<sizeof(ar)/sizeof(ar[0]);i++)
	{
		printf("%d", ar[i]);
	}
	for(i = 0;i<20;i++)
	{
		pr[i] = i+1;
		printf("%d",pr[i]);
	}
	free(pr);
	return 0;
}
//------------------------------------------------------------------------------------------------
int main(){
	char *c;
	float *f;
	c = (int *)malloc(sizeof(char));
	f = (float *)malloc(sizeof(float));
	*f = 3.141592;
	*c = 'A';
	printf("%f\n",*f);
	printf("%c\n",*c);
	free(c);
	free(f);
	return 0;
}
//-------------------------------------------------------------------------------------------------
int main()
{
	int *arr;
	int i;
	int length;
	srand(time(NULL));
	scanf("%d",&length);
	arr = (int *)malloc(sizeof(int)*length);
	for (i = 0;i<length;i++)
	{
		arr[i] = rand()%100+1;
	}
	for (i = 0;i<length;i++)
	{
		printf("%d  ",arr[i]);
	}
	free(arr);
	return 0;
}
