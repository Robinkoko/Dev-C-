#include <iostream>
int main()
{
	int arr[5][4]
	int brr[6][7]
	float crr[8][9]
	char drr[10][12]
}
//----------------------------------------------------------
int main()
{
	int ar1[3][4] = {0};
	int ar2[][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d",ar1[i][j]);
		}
		printf("\n");
	}
}
//----------------------------------------------------------
int main()
{
	int ar1[3][4] = {0};
	int ar2[][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i=0,j=0;
	while (i<3)
	{
		j=0;
		while (j<4)
		{
			printf("%d",ar1[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
//----------------------------------------------------------
int main()
{
	int ar1[3][4] = {0};
	int ar2[][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i=0,j=0;
	do
	{
		j=0;
		do
		{
			printf("%d",ar1[i][j]);
			j++;
		}while (j<4);
		printf("\n");
		i++;
	}while (i<3);
}
//-----------------------------------------------------------------------
int main()
{
	int i,j,count=0;
	int ar[6][9]={{0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,2,0},{0,0,0,0,1,0,0,0,0},{0,2,0,1,0,0,1,0,0},{0,0,0,1,0,0,0,0,0},{0,0,1,0,0,0,1,0,0}};
	for(i=0;i<6;i++)
	{
		for(j=0;j<9;j++)
		{
			if (ar[i][j]==1){
				count++;
			}
		}
	}
	printf("%d",count);
}
//---------------------------------------------------------------------------
int main()
{
	int i,j;
	int ar[6][9]={{0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,2,0},{0,0,0,0,1,0,0,0,0},{0,2,0,1,0,0,1,0,0},{0,0,0,1,0,0,0,0,0},{0,0,1,0,0,0,1,0,0}};
	for(i=0;i<6;i++)
	{
		for(j=0;j<9;j++)
		{
			if (ar[i][j]==2){
				printf("%d�� %d��",i,j);
			}
		}
	}
}
//---------------------------------------------------------------------------
int main()
{
	int i,j;
	int ar[6][9]={{0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,2,0},{0,0,0,0,1,0,0,0,0},{0,2,0,1,0,0,1,0,0},{0,0,0,1,0,0,0,0,0},{0,0,1,0,0,0,1,0,0}};
	for(i=0;i<6;i++)
	{
		for(j=0;j<9;j++)
		{
			if (ar[i][j]==2){
				ar[i-1][j]=5;
				ar[i+1][j]=5;
				ar[i][j-1]=5;
				ar[i][j+1]=5;
			}
		}
	}
}
//---------------------------------------------------------------------------
int main()
{
	int i,j;
	int ar[6][9]={{0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,2,0},{0,0,0,0,1,0,0,0,0},{0,2,0,1,0,0,1,0,0},{0,0,0,1,0,0,0,0,0},{0,0,1,0,0,0,1,0,0}};
	for(i=0;i<6;i++)
	{
		for(j=0;j<9;j++)
		{
			if (ar[i][j]==0){
				ar[i][j]=1;
			}
			else{
				ar[i][j]=1;
			}
		}
	}
}
