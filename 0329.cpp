#include <stdio.h>

int main() {
	int A[10];
	int B[10];
	int a=0;
	int b=0;
	char winner = 'D';
	for (int i = 0; i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	for (int i = 0; i<10;i++)
	{
		scanf("%d",&B[i]);
	}
	for (int i = 0; i<10;i++)
	{
		if(A[i]>B[i])
		{
			winner = 'A';
			a+=3;
		}
		else if(A[i]<B[i])
		{
			winner = 'B';
			b+=3;
		} 
		else 
		{
			a++;
			b++;
		}
	}
	printf("%d %d\n%c",a,b,winner);
	return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int map[m][n];
	int mw_x;
	int mw_y;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&map[j][i]);
			if (map[i][j]==2)
			{
				mw_x = j;
				mw_y = i;
			}
		}
	}
	while (!(map[mw_y+1][mw_x] && map[mw_y][mw_x+1]))
	{
		if (!map[mw_y+1][mw_x]) mw_y++;
		else if (!map[mw_y][mw_x+1]) mw_x++;
	}
	printf("%d %d",mw_x,mw_y);
	return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int map[101][101] = { 0,};
	for (int i=0;i<m;i++)
	{
		int c1, c2, car;
		scanf("%d %d %d",&c1,&c2,&car);
		if(map[c1-1][c2-1] == 0 || map[c1-1][c2-1]<car)
		map[c1-1][c2-1] = car;
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int map[101][101] = { 0,};
	for (int i=0;i<m;i++)
	{
		int c1, c2, car;
		scanf("%d %d %d",&c1,&c2,&car);
		if(map[c1-1][c2-1] == 0 || map[c1-1][c2-1]<car)
		map[c1-1][c2-1] = car;
	}
	for (int i=0;i<n;i++)
	{
		int sum_in=0,sum_out=0;
		for (int j=0;j<=n;j++)
		{
			sum_in += map[j][i];
			sum_out += map[i][j];
		}
		if (sum_in > sum_out) printf("%d ",i+1);
	}
}
