#include <stdio.h>

int main() {
	char C; int I; long long L; double D; char s[101];
	scanf("%c %d %lld %lf %s",&C,&I,&L,&D,&s);
	printf("%s %lf %lld %d %c",s,D,L,I,C);
}
//----------------------------------------------------------------
#include <stdio.h>

int main(){
	int H;
	int M;
	int S;
	int T;
	scanf("%d %d %d",&H,&M,&S);
	scanf("%d",&T);
	if (0<=T && T<=86400 && 0<=H,M,S && H<=23 && M,S <= 59){
		H = H - T / 3600;
		if (0 > M - (T % 3600) / 60)
		{
			M = M+60 - (T % 3600) / 60;
			H--;
		}
		else{
			M = M - (T % 3600) / 60;
		}
		if (0 > S - (T % 3600) % 60)
		{	
			S = S+60 - (T % 3600) % 60;
			M--;
		}
		else{
			S = S - (T % 3600) % 60;
		}
		if (H<0 || M<0 || S<0)
		{
			printf("시간이 음수입니다.");
			return -1;
		}
		printf("%d %d %d",H,M,S);
	}
	else{
		printf("허용된 범위가 아닙니다.");
		return -1;
	}
}
//----------------------------------------------------------------
#include <stdio.h>

int main(){
	int a,sum = 0;
	scanf("%1d",&a);
	sum += a;
	scanf("%1d",&a);
	sum += a;
	scanf("%1d",&a);
	sum += a;
	scanf("%1d",&a);
	sum += a;
	printf("%d",sum);
}
//----------------------------------------------------------------
#include <stdio.h>

int main()
{
	long long N,M,i;
	scanf("%lld %ldd", &N,&M);
	scanf("%lld",&i);
	if (N/M == (i -1)/M)
		printf("0");
	else printf("%lld",(i-1)%M+1); 
}
//----------------------------------------------------------------
#include <stdio.h>

int main()
{
	int a,b,c,d,sum;
	char val[3];
	for (int i=0;i<3;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		sum = a+b+c+d;
		if(sum == 3) val[i] = 'A';
		else if (sum == 2) val[i] = 'B';
		else if (sum == 1) val[i] = 'C';
		else if (sum == 0) val[i] = 'D';
		else if (sum == 4) val[i] = 'E';
	}
	printf("%c\n%c\n%c",val[0],val[1],val[2]);
}
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int sum = pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2) + pow(e,2);
	printf("%d",sum%10);
	
}
