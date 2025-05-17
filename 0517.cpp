#include <iostream>
#include <string>
using namespace std;
struct student{
	int ID,c,a;
	string s;
};
int main(){
	int n,m;
	cin >> n;
	student s1[n];
	for (int i=0;i<n;i++){
		int ID,c,a;
		char s[100];
		scanf("%d %s %d %d",&ID,s,&c,&a);
		s1[i].ID = ID;
		s1[i].s = s;
		s1[i].c = c;
		s1[i].a = a;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		string search;
		cin >> search;
		for (int j=0;j<n;j++){
			if (s1[j].s == search)
				printf("%d %d %d",s1[j].ID,s1[j].c,s1[j].a);
			else printf("-1");
		}
	}
}
//-------------------------------------------------------------------------------
#include <iostream>
#include <utility>
using namespace std;
int main(){
	int n;
	cin >>n;
	pair<int,int> p[n];
	for (int i =1;i<=n;i++){
		int s,a;
		scanf("%d %d",&s,&a);
		p[i] = make_pair(s,a);
	}
	pair<int,int> M;
	M.first = -1;
	M.second = -1;
	int team =0;
	for (int i=1;i<=n;i++){
		if (p[i]>M){
			M = p[i];
			team =i;
		}
	}
	cout << team;
}
//-------------------------------------------------------------------------------
#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	pair<int,int> p[n+1][m+1];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			int gender,height;
			scanf("%d %d",&gender,&height);
			p[i][j] = make_pair(gender,height);
		}
	}
	int a1,b1,a2,b2;
	pair<int,int> temp = p[a1][b1];
	scanf("%d %d",&a1,&b1);
	scanf("%d %d",&a2,&b2);
	p[a1][b1] = p[a2][b2];
	p[a2][b2] = temp;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			printf("%d %d ",p[i][j].first,p[i][j].second);
		}
		printf("\n");
	}
}
//-------------------------------------------------------------------------------
#include <iostream>
using namespace std;
struct box{
	int num,model,size,price;
};
box p[1000];
int cnt = 0;
void add(int an,int mn,int sz,int ps){
	p[cnt].num = an;
	p[cnt].model = mn;
	p[cnt].size = sz;
	p[cnt].price = ps;
	cnt++;
}
void modi(int an,int nb,int ch){
	for (int i=0;i<cnt;i++){
		if (an == p[i].num){
			if (nb == 0) p[i].model = ch;
			else if (nb == 1) p[i].size= ch;
			else if (nb == 2) p[i].price = ch;
		}
	}
}
void show(int an){
	for (int i=0;i<cnt;i++){
		if (an == p[i].num){
			printf("%d %d %d %d",p[i].num,p[i].model,p[i].size,p[i].price);
		}
	}
}

int main(){
	int n;
	cin >>n;
	for (int i = 0;i<n;i++){
		int op;
		cin >>op;
		if (op == 0){
			int an,mn,sz,ps;
			scanf("%d %d %d %d",&an,&mn,&sz,&ps);
			add(an,mn,sz,ps);
		}
		else if (op == 1){
			int an,nb,ch;
			scanf("%d %d %d",&an,&nb,&ch);
			modi(an,nb,ch);
		}
		else if (op == 2){
			int an;
			scanf("%d",&an);
			show(an);
		}
	}
}
//-------------------------------------------------------------------------------
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<int,int> p[1001];
	pair<int,int> no_1 = {-1,-1};
	int n;
	cin>>n;
	for (int i = 0;i<n;i++){
		int s,t;
		scanf("%d %d",&s,&t);
		t = 5000 -t;
		p[i] = make_pair(s,t);
		if (p[i] > no_1) no_1 =p[i];
	}
	int ans = 0;
	for (int i=0;i<n;i++){
		ans += np_1.first - p[i].first;
	}
	printf("%d",ans + no_1.second);
}
