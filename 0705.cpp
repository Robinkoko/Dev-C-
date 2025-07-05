#include <iostream>
using namespace std;
int main(){
	int n,cnt = 0;
	cin >> n;
	while (n){
		if (n % 5 == 0){
			cnt += n/5;
			break;
		}
		else {
			n -= 3;
			if (n < 0){
				cnt =-1;
				break;
			}
			cnt += 1;
		}
	}
	cout << cnt << endl;
}
//----------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#define INF 12345678905
using namespace std;

int d[5001];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<=5000;i++)
		d[i] = INF;
	d[3] = 1;
	d[5] = 1;
	for (int i = 6;i <=5000 ;i++){
		d[i] = min(d[i-3],d[i-5])+1;
	}
	if (d[n] < INF) cout << d[n] << endl;
	else cout << -1 << endl;
}
//----------------------------------------------------------------------
#include <iostream>
using namespace std;

int d[1001];

int main(){
	int n,res;
	cin >> n;
	d[0] = 1;
	d[1] = 1;
	for (int i = 2;i <=n; i++){
		d[i] = d[i-1] + d[i-2];
	}
	res = d[n];
	res  %= 10007;
	cout << res << endl;
	return 0;
}
//----------------------------------------------------------------------
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int p[n];
	int d[n];
	for (int i=0;i<n;i++)
		cin >> p[i];
	for (int i=0;i<n;i++)
		for (int j = 0;j<n;j++)
			if (d[i] <d[i-j] + a[j])
				d[i] = d[i-j] +a[j];
	cout << d[n] << endl;
}
//----------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n,cnt,res;
	cin >> n;
	int s[n];
	for (int i = 0; i<n;i++)
		cin >> s[i];
	for (int i = 0;i<n;i++){
		if (i+1 > n-1) {
			res += s[i];
			break;
		}
		if (cnt < 3) {
			
			res += max(s[i],s[i+1]);
			if (s[i] < s[i+1]) i++;
			cnt++;
		}
		else {
			res += s[i+1];
			cnt++;
		}
	}
	cout << res;
}
