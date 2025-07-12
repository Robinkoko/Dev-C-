#include <iostream>
using namespace std;

int d[11];

int main(){
	d[0] = 1;
	for(int i=1;i<=10;i++){
		if(i-1 >= 0) d[i] += d[i-1];
		if(i-2 >= 0) d[i] += d[i-2];
		if(i-3 >= 0) d[i] += d[i-3];
	}
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		cout << d[n] <<endl;
	}
}
//---------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
long long a[100001][2];
long long d[100001][3];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i=1;i<=n;i++) cin >> a[i][0];
		for (int i=1;i<=n;i++) cin >> a[i][1];
		for (int i=1;i<=n;i++){
			d[i][0] = max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
			d[i][1] = max(d[i-1][0],d[i-1][2]) +a[i][0];
			d[i][2] = max(d[i-1][0],d[i-1][1]) +a[i][1];
		}
		long long ans = 0;
		ans = max(d[n][0],max(d[n][1],d[n][2]));
		cout << ans;
	}
}
//---------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+2];
	int d[n+2] = {0,};
	for(int i = 1;i<=n;i++) cin >> a[i];
	d[1] = a[1];
	d[2] = a[1]+a[2];
	for (int i=3;i<=n;i++){
		d[i] = d[i-1];
		if (d[i] < d[i-2] + a[i]) d[i] = d[i-2] + a[i];
		if (d[i] < d[i-3] + a[i] + a[i-1]) d[i] = d[i-3] + a[i] + a[i-1];
	}
	cout << d[n] << endl;
}
//---------------------------------------------------------------------
#include <iostream>
#include <cstring>
using namespace std;
int d[5001];
int mod = 10000000;
char s[5002];
int main(){
	cin >> s+1;
	int n = strlen(s+1);
	d[0] = 1;
	for (int i = 1;i<=n;i++){
		int x = s[i] - '0';
		if (1 <= x && x<=9){
			d[i] += d[i-1];
			d[i] %= mod;
		}
		if (i==1) continue;
		if (s[i-1] == '0') continue;
		x = (s[i-1]  - '0') * 10 + (s[i] - '0');
		if (10<=x&&x<=26){
			d[i] += d[i-2];
			d[i] %= mod;
		}
	}
	cout << d[n];
}
//--------------------------------------------------------------------------¹Ì¿Ï 
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n,ans=0;
	cin >> n;
	int s[n];
	for (int i = 1; i<=n;i++)
		cin >> s[i];
	s[0] = 0;
	ans += s[n];
	for (int i = n;i>=0;i--){
		int temp = max(s[i-1],s[i-2]);
		ans += temp;
		if (temp == s[i-2]) i--;
	}
	cout << ans;
}
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int cut(int n){
	int ans =0;
	for (int i = 0; i<7; i++){
		ans += n%10;
		n /= 10;
	}
	return ans;
}
int main(){
	int n,ans;
	cin >> n;
	for (int i =0;i<=n;i++){
		if (i+cut(i) == n) {
			cout << i;
			return 0;	
		}
	}
	cout << 0;
	return 0;
}
