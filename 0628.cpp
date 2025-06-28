#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,m,x,y,s = 0;
	cin >> n >> m;
	int X[n] = {0,} ,Y[n] = {0,};
	for (int i = 0;i<m;++i){
		cin >> x >> y;
		X[i] = x;
		Y[i] = y;
		
	}
	sort(X,X+m);
	sort(Y,Y+m);
	x = X[m/2];
	y = Y[m/2];
	for (int i = 0;i<m;++i)
		s += abs(x-X[i]) + abs(y - Y[i]);
	cout << s;
	return 0;
}
//---------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
#define inside(a,b,c) ((a) <= (c) && (c)<=(b))

int main(){
	int n,m,l;
	cin >> n >> l >> m;
	int X[n] = {0,} ,Y[n] = {0,}, FX[n] = {0,}, FY[n] = {0,};
	for (int i = 0;i<m;i++){
		cin >> FX[i] >> FY[i];
		X[i] = FX[i];
		Y[i] = FY[i];
	}
	sort(X,X+m);
	sort(Y,Y+m);
	l /=2;
	int h,cnt,ans = 0;
	for (int w = 1;w<l;w++){
		h = l - w;
		for (int i = 0;i<m;i++){
			for (int j = 0;j < m;j++){
				cnt = 0;
				for (int k = 0; k< m;k++){
					if (inside(X[i],X[i]+ w, FX[k]) && inside(Y[j],Y[j] + h, FY[k]))
						cnt++;
				}
				if (ans < cnt)
					ans  = cnt;
			}
			
		}
	}
	cout << ans;
	return 0;
}
//---------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

struct ball{
	int num, size, color;
};
int main(){
	int n,total,color,size;
	cin >> n;
	int sum[n],ans[n];
	ball b[n];
	for (int i = 0;i < n;i++){
		cin >>  color >> size;
		b[i].num = i+1;
		b[i].color = color;
		b[i].size = size;
	}
	for (int i = 0;i < n;i++){
		total = 0;
		for (int j = 0;j < n;j++){
			if ((b[i].color != b[j].color) &&(b[i].size > b[j].size))
				total += b[j].size;
		}
		cout << total <<endl;
	}
	
}
//---------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct students{
	string name;
	int ko,en,math;
};
bool cmp(const students left,const students right){
	if (left.ko > right.ko) return 1;
	else if (left.ko == right.ko)
		if (left.en < right.en) return 1;
		else if (left.en == right.en)
			if (left.math > right.math) return 1;
			else if (left.math == right.math) return left.name < right.name;
	return 0;
}
int main(){
	int n;
	cin >> n;
	students s[n];
	for (int i =0;i<n;i++){
		cin >> s[i].name >> s[i].ko >> s[i].en >> s[i].math;
	}
	sort(s,s+n,cmp);
	for (int i =0;i<n;i++){
		cout << s[i].name<< endl;
	}
}
//---------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int left,int right){
	return left < right;
}
int main(){
	int dwarf[9];
	int sum = 0;
	int f,s,total;
	for (int i = 0;i < 9;i++){
		cin >> dwarf[i];
		sum += dwarf[i];
	}
	sort(dwarf,dwarf+9,cmp);
	for (int i = 0;i < 9;i++){
		total = 0;
		for (int j = 0;j < 9;j++){
			if (i == j) continue;
			total = dwarf[i] + dwarf[j];
			if (sum - total == 100){
				f =i;
				s=j;
				break;
			}
		}
	}
	for (int i = 0;i < 9;i++){
		if (i == f || i == s) continue;
		cout << dwarf[i] << endl;
	}
}
