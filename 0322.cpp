#include <stdio.h>

int main() {
	int day,carnum,cnt=0;
	scanf("%d",&day);
	for (int i= 0;i<5;i++)
	{
		scanf("%d",&carnum);
		if (carnum==day) cnt++;
	}
	printf("%d",cnt);
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>

int main() {
	int ride,off,max,people=0;
	for (int i= 0;i<4;i++)
	{
		scanf("%d %d",&off,&ride);
		people = people - off + ride;
		if (max < people) max = people;
	}
	printf("%d",max);
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>

int main() {
	int ride,off,max,people=0;
	for (int i= 0;i<4;i++)
	{
		scanf("%d %d",&off,&ride);
		people = people - off + ride;
		if (max < people) max = people;
	}
	printf("%d",max);
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>

int main() {
	int n,max=0,min=100,sum;
	scanf("%d",&n);
	int Ai[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&Ai[i]);
		if (Ai[i] >= max) max = Ai[i];
		if (Ai[i] <= min) min = Ai[i];
		sum += Ai[i];
	}
	printf ("%d",(sum-min-max)/(n-2));
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int n,index=0,mgap=0;
	vector<int> h;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		h.push_back(temp);
	}
	for (int i=1;i<n;i++)
	{
		if (mgap<h[i]-h[i-1])
		{
			mgap=h[i]-h[i-1];
			index = i;
		}	
	}
	if (index) printf("%d %d",index,index+1);
	else pritnf("0");
	return 0;
}
//-----------------------------------------------------------
//arrange 사용 
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int score[n],rank[n];
	for (int i = 0; i<n; i++)
	{
		scanf("%d",&score[i]);
	}
	for (int i = 0; i<n; i++)
	{
		rank[i] = 1;
		for (int j=0;j<n;j++)
		{
			if (score[i] < score[j]) rank[i]++;
		}
	}
	for (int i = 0; i<n; i++)
	{
		printf("%d\n",rank[i]);
	}
	return 0;
}
//-----------------------------------------------------------
//vector 사용 
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int n;
	vector<int> s;
	scanf("%d",&n);
	int r[n];
	for (int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		s.push_back(temp);
	}
	for (int i = 0; i<n; i++)
	{
		r[i] = 1;
		for (int j=0;j<n;j++)
		{
			if (s[i] < s[j]) r[i]++;
		}
	}
	for (int i = 0; i<n; i++)
	{
		printf("%d\n",r[i]);
	}
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>

int main() {
	int tell;
	int count[10] = {0,};
	scanf("%d",&tell);
	for (int i = 0;i<8;i++)
	{
		count[tell%10]++;
		tell/=10;                                                                              
	}
	count[6] += count[9]+1;
	count[6] /=2;
	count[9] = count[6]
	int max_count = 0;
	for (int i = 0;i<10;i++)
	{
		if(max_count < count[i])
			max_count = count[i];                                                                      
	}
	printf("%d",max_count);
	return 0;
}
//-----------------------------------------------------------
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int n,cnt;
	vector<int> s;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		s.push_back(temp);
	}
	for (int i=n-1;i>=0;i--)
	{
		while (s[i]>=s[i+1]) 
		{
			s[i]--;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
