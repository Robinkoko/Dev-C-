#include <iostream>
using namespace std;

int main(){
	int w,h,p,q,t;
	cin >> w >> h >> p >> q >> t;
	int x = (p+t)%(2*w);
	int y = (q+t)%(2*h);
	if (x>w) x = 2*w-x;
	if (y>h) y = 2*h-y;
	cout << x <<" "<<y <<endl;
}
//----------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin >> m >>n;
	bool check[1000001];
	check[0] = 1;
	check[1] = 1;
	for (int i =2;i*i <= 1000000;i++){
		if (check[i] == false){
			for (int j =i*i;j<1000001;j+=i)
				check[j] = true;
		}
	}
	for (int i =m; i <=n;i++){
		if (!check[i]) cout << i << endl;
	}
}
//----------------------------------------------------------------
#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (a%b==0) return b;
	else return gcd(b,a%b);
}
int main(){
	int n;
	cin >> n;
	int pos[100000], dist[100000];
	for (int i=0;i<n;i++){
		cin >> pos[i];
	}
	for (int i =0;i<n;i++){
		dist[i] = pos[i+1] - pos[i];
	}
	int g = dist[0];
	for (int i =1;i<n-1;i++){
		g = gcd(dist[i],g);
	}
	int ans = 0;
	for (int i =0; i < n-1;i++){
		ans +=dist[i]/g-1;
	}
	cout << ans;
}
//----------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
	int c,r,k;
	cin >> c >> r >> k;
	bool vis[c][r];
	for(int i = 0; i<c;i++){
		for(int j = 0; j<r;j++){
			vis[i][j] = false;
		}
	}
	int cnt=1,x=0,y=0;
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	int dir = 0;
	vis[x][y] = 1;
	if (k>c*r) {
		cout << 0 <<endl;
		return 0;
	}
	while (cnt != k){
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if (nx<0 || nx>=c || ny<0 ||ny>=r || vis[nx][ny]){
			dir = (dir+1)%4;
			nx = x + dx[dir];
			ny = y + dy[dir];
		}
		x = nx, y = ny;
		vis[x][y] = true;
		cnt++;
	}
	cout << x+1 <<" "<< y+1 <<endl;
	return 0;
}
