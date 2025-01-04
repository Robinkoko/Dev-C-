#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ar[6][6] = {0};
	int i,j,max=0;
	srand(time(NULL));
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	i=0;
	while(i<6)
	{
		j=0;
		while (j <6)
		{
			printf("%3d", ar[i][j]);
			if(max < ar[i][j])
			{
				max = ar[i][j];
			}
			j++;
		}
		printf("\n");
		i++;
	}
	printf("%d",max);
	return 0;
}
//------------------------------------------------------------------------------------------------------
int main() {
	int ar[6][6] = {0};
	int i,j,res,bol=0;
	srand(time(NULL));
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	i=0;
	while(i<6)
	{
		j=0;
		while (j <6)
		{
			printf("%3d", ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	scanf("%d",&res);
	i=0;
	while(i<6)
	{
		j=0;
		while (j <6)
		{
			if(res == ar[i][j])
			{
				bol = 1;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	printf("%d",bol);
	return 0;
}
//------------------------------------------------------------------------------------------------------
int main(){
	int ar[10]= {10,20,30,40,50,60,70,80,90,100};
	int br[7];
	printf("배열의 이름 : %d\n", ar);
	printf("배열의 이름 : %d\n", br);
	return 0;
}
//----------------------------------------------------------------------------------
int main(){
	int ar[10]= {10,20,30,40,50,60,70,80,90,100};
	printf("%d\n", ar[0]);
	printf("%d\n", ar+0);
	printf("%d\n", &ar[0]);
	printf("%d\n", *(ar+0));
}
//----------------------------------------------------------------------------------
int main()
{
	int n, *p;
	p = &n;
	*p = 70;
	printf("%d %d",n, *p);
	return 0;
}
//----------------------------------------------------------------------------------
int main()
{
	int ar[10]= {10,20,30,40,50,60,70,80,90,100};
	int i;
	*(ar +0) = 34;
	*(ar+1) = 21;
	printf("%d %d\n", ar[0], *(ar+0));
	printf("%d %d\n", ar[1], *(ar+1));
	printf("%d %d\n", *(ar+2), *(ar+3));
}
//----------------------------------------------------------------------------------
int main()
{
	int ar[] = {11,21,31,41,51,61,71};
	int *p, *q, *r;
	p = ar;
	q = &ar[1];
	r = (ar+2);
	printf("%d %d\n", *p, ar[0]);
	printf("%d %d\n", *q, *(ar+1));
	printf("%d %d\n", *r, ar[2]);
}
//----------------------------------------------------------------------------------
int main() {
	int ar[10];
	int i,j;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		ar[i] = rand()%41+20;
	}
	printf("###################\n# 가로 막대 그래프 #\n###################\n");
	for(i=0;i<10;i++)
	{
		printf("ar[%d] : ",i);
		for(j=0;j <ar[i];j++){
			printf("*");
		}
		printf(" %d\n", ar[i]);
	}
	return 0;
}
