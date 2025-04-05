//황금 광산 
#include <stdio.h>

int main() {
	int m,n;
	int map[102][1022] = {0,};
	scanf("%d %d", &m,&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%d",&map[i][j]);
		}
	}
	int max_gold = 0,x,y;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			int sum_gold = 0;
			sum_gold += map[i][j] + map[i+1][j] + map[i-1][j] + map[i][j+1] + map[i][j-1];
			if(max_gold < sum_gold){
				max_gold = sum_gold;
				x =j;
				y=i;
			}
		}
	}
	printf("%d %d %d",x,y,max_gold);
	return 0;
}
//------------------------------------------------------------------------
//함정 1,2 
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int map[n+1][n+1] ={0,};
	int t,k;
	scanf("%d %d",&t,&k);
	for (int i=0;i<t;i++){
		int tx,ty;
		scanf("%d %d",&tx,&ty);
		map[ty][tx] = 1;
	}
	int steped = -1;
	int sum=0;
	for (int i=0;i<k;i++){
		int kx,ky;
		scanf("%d %d",&kx,&ky);
		sum++;
		if (map[ky][kx] == 1){
			steped = sum;
		}
	}
	printf("%d",steped);
}
//------------------------------------------------------------------------
//실기: 봉화 
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int mount[n]={0,};
	for (int i=0;i<n;i++){
		scanf("%d",&mount[i]);
	}
	int sum=0,max=0;
	for (int i=n;i>=0;i--){
		if(mount[i]>max){
			max = mount[i];
			sum++;
		}
	}
	printf("%d",sum);
}
//------------------------------------------------------------------------
//실습:지뢰 찾기 
#include <stdio.h>

int main(){
	int n,m,c;
	scanf("%d %d",&n,&m);
	int map[m+1][n+1] = {0,};
	scanf("%d",&c);
	for (int i = 0;i<c;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		map[y][x]=-1;
		for (int i=-1;i<2;i++){
			for (int j=-1;j<2;j++){
				if (map[y+i][x+j] != -1) map[y+i][x+j]++;
			}
		}
	}
	for (int i = 1;i<=m;i++){
		for (int j = 1;j<=n;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
}
//------------------------------------------------------------------------
//추가문제:색종이 
#include <stdio.h>

int main(){
	int map[100][100];
	int acp,count;
	scanf("%d",&acp);
	for (int i=0;i<acp;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		for (int j = y;j<y+10;j++){
			for (int k = x;k<x+10;k++){
				if (map[j][k] != 1){
					map[j][k] = 1;
					count++;
				}
			}
		}
	}
	printf("%d",count);
}

