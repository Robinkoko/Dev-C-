#include <stdio.h>


int main() {
	
	int n,cnt=1;
	scanf("%d",&n);
	int j = n;
	for (int i=0;i<j;i++){
		cnt *= n;
		n -= 1;
	}
	printf("%d",cnt);
	return 0;
}
//------------------------------------------------------------------------------------------
#include <stdio.h>

int teleporter[1001];

int Find(int p,int t){
	if (t == 0) return p;
	return Find(teleporter[p],t-1);
}
int main(){
	int n,p,t;
	scanf("%d %d %d",&n,&p,&t);
	for(int i=1;i<=n;i++){
		scanf("%d",&teleporter[i]);
	}
	printf("%d", Find(p,t));
}
//------------------------------------------------------------------------------------------
#include <stdio.h>
int main(){
	int n,cnt;
	scanf("%d",&n);
	while(n){
		cnt += n%10;
		n = n / 10;
	}
	printf("%d",cnt);
}
//------------------------------------------------------------------------------------------
#include <stdio.h>

int collatz(int n){
	if (n == 1) return 0;
	if (n % 2 ==0) return 1+collatz(n/2);
	else return 1 + collatz(n*3 +1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",collatz(n));
}
//------------------------------------------------------------------------------------------
#include <stdio.h>

void Hanoi(int n, int from,int to){
	if (n == 0) return;
	Hanoi(n-1,from,6-from-to);
	printf("%d %d\n",from,to);
	Hanoi(n-1,6-from-to,to);
}
int main(){
	int n;
	scanf("%d",&n);
	Hanoi(n,1,3);
}
//------------------------------------------------------------------------------------------
#include <stdio.h>

int n;
int p[11];
int ans;
void perform(int index,int sum){
	if(index == n){
		if (ans<sum)ans=sum;
		return;
	}
	int p_first = p[index];
	int p_second = p[index] * p[index] -40 * p[index] +300;
	perform(index+1,sum+p_first);
	perform(index+1,sum+p_second);
}
int main(){
	scanf("%d",&n);
	for (int i = 0; i <n; i++)
	{
		scanf("%d",&p[i]);	
	}
	perform(0,0);
	printf("%d",ans);
}
//------------------------------------------------------------------------------------------
#include <stdio.h>
int S[10];
int B[10];
int n;
int diff;
int balance(int index,int s,int b){
	if (index == n)
	{
		if (b<s) diff = s-b;
		else diff = b-s;
	}
	balance(index+1,S[index]*s,B[index]+b);
	balance(index+1,s,b);
}
int main(){
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&S[i],&B[i]);
	}
}
