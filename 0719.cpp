#include <iostream>
using namespace std;

int main(){
	int n,start,end,death;
	cin >> start >> end >> death >> n;
	int d[n];
	d[0] = 1;
	for (int i = 1;i<=n;i++){
		d[i] = d[i-1];
		if (i >= start) d[i] += d[i-start];
		if (i >= end) d[i] -= d[i-end];
		if (i >= death) d[i] -= d[i-death];
	}
	cout << d[n]%1000 << endl;
}
//-------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,ans=0;
	cin >> n;
	int s[n+1];
	int d[n+1];
	for (int i = 1; i<=n;i++)
		cin >> s[i];
	s[0] = 0;
	int cnt = 0;
	d[1] = s[1];
	d[2] = s[2] + s[1];
	for (int i= 3;i<=n;i++){
		d[i]  = max(s[i] + s[i-1]+ d[i-3],s[i] + d[i-2]);
	}
	cout << d[n];
}
//-------------------------------------------------------------------------1932
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int temp = n-1;
	int t[n][n];
	int d[n][n];
	for (int i =0;i <n ;i++){
		for (int j = 0;j < i+1;j++){
			cin >> t[i][j];
			d[i][j] = 0;
		}
		
	}
	
	for (int i = 0; i<n;i++){
		d[n-1][i] = t[n-1][i];
	}
	for (int i = n - 2;i >=0 ;i--){
		for (int j = 0;j < i+1;j++){
			d[i][j] = max(d[i+1][j],d[i+1][j+1]) + t[i][j];
		}
	}
	cout << d[0][0];
}
