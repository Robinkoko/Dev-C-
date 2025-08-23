#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a[1001];
bool checkd[1001];
void dfs(int node){
	checkd[node] = true;
	cout << node << " ";
	for (int i =0;i<a[node].size();i++){
		int next = a[node][i];
		if(checkd[next] == false)
			dfs(next);
	}
}
void bfs (int start){
	bool check[1001] = {0,};
	queue<int> q;
	check[start] = true;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << " ";
		for (int i=0;i<a[node].size();i++){
			int next  = a[node][i];
			if (check[next] == false){
				check[next] = true;
				q.push(next);
			}
		}
	}
}
int main(){
	int n,m,start;
	cin >> n >> m >> start;
	for (int i = 0;i<m;i++){
		int u,v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i =1; i <= n; i++)
		sort(a[i].begin(),a[i].end());
	dfs(start);
	cout << endl;
	bfs(start);
	return 0;
}

//--------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node){
	check[node] = true;
	for (int i =0;i<a[node].size();i++){
		int next = a[node][i];
		if(check[next] == false)
			dfs(next);
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 0;i<m;i++){
		int u,v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		if (check[i] == false){
			check[i] = true;
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << endl;
}

//--------------------------------------------------------------------
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int a[30][30];
int group[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;
int ans[25*25];

void bfs(int x,int y,int cnt){
	queue<pair<int,int> > q;
	q.push(make_pair(x,y));
	group[x][y] = cnt;
	while (!q.empty()) {
		x= q.front().first;
		y =q.front().second;
		q.pop();
		for (int k = 0;k<4;k++){
			int nx =x+dx[k];
			int ny = y+dy[k];
			if ( 0 <= nx && nx < n && 0 <= ny && ny < n){
				if (a[nx][ny] == 1 && group[nx][ny] == 0){
					q.push(make_pair(nx,ny));
					group[nx][ny] = cnt;
				}
			}
		}
	}
}
int main(){
	cin >> n;
	for (int i =0;i<n;i++){
		for (int j =0;j < n;j++){
			cin >> a[i][j];
		}
	}
	int cnt =0;
	for (int i =0; i<n;i++){
		for (int j = 0;j<n;j++){
			if (a[i][j] == 1 && group[i][j] ==0) bfs(i,j,++cnt);
		}
	}
	cout << cnt << endl;
	for (int i =0; i<n;i++){
		for (int j = 0;j<n;j++){
			ans[group[i][j]] +=1;
		}
	}
	sort(ans+1,ans+cnt+1);
	for(int i =1;i<=cnt;i++){
		cout << ans[i] << endl;
	}
}
