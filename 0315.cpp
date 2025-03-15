#include <stdio.h>

int main() {
	int h,m,c;
	scanf("%d %d",&h,&m);
	scanf("%d",&c);
	m += c;
	h += m/60;
	m %=60;
	h %=24;
	printf("%d %d",h,m);
	return 0;
}
//-------------------------------------------------------
#include <stdio.h>

int main() {
	int n,sum,i,Ai,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ai);
		sum += Ai;
	}
	avg = sum / n;
	if (avg >= 80) printf("easy");
	else if (avg >= 60) printf("normal");
	else printf("hard");
	return 0;
}
//-------------------------------------------------------
#include <stdio.h>

int main() {
	int n,sum,i,Ai,Bi;
	scanf("%d",&n);
	int ans[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ans[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&Bi);
		if (Bi == ans[i]) sum++;
	}
	printf("%d",sum);
	return 0;
}
//-------------------------------------------------------
#include <stdio.h>
int main() {
	long long n,sum;
	int cnt=0;
	scanf("%lld",&n);
	while (n>=10)
	{
		sum = 0;
		while(n){
			sum += n%10;
			n /= 10;	
		}
		n = sum;
		cnt++;
	}
	printf("%d\n",cnt);
}
//-------------------------------------------------------
#include <stdio.h>
int main() {
	int n,m,i,j,cnt;
	bool prime=0;
	scanf("%d %d",&n,&m);
	for (i = n;i<=m;i++)
	{
		prime = 0;
		for (j =2;j*j<=i;j++)
		{
			if (i%j==0) break;
		}
		if (j*j>i) cnt++;
	}
	printf("%d",cnt);
	return 0;
}
//-------------------------------------------------------
#include <stdio.h>
int main() {
	int a[10],b[10];
	int aw,bw;
	for (int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for (int i=0;i<10;i++)
	{
		if (a[i]>b[i])aw++;
		else if (a[i]<b[i] )bw++;
		else bw++;aw++;
	}
	if (aw>bw) printf("A");
	else if (bw>aw) printf("B");
	else printf("D");
	return 0;
}
//-------------------------------------------------------
#include <stdio.h>
int main() {
	int n,k,i,cnt=0,a=0;
	scanf("%d %d",&n,&k);
	for (i = 1;i<=n;i++)
	{	
		if (n%i == 0) {
		cnt++;
			if (cnt==k){
				a=i;
				break;
			}
		}
	}
	printf("%d",a);
	return 0;
}
