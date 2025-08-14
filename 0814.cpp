#include <iostream>
using namespace std;

int main(){
	int n,max=1;
	cin >> n;
	int ar[n];
	int dp[n];
	dp[0] = 1;
	for (int i=0;i<n;i++){
		cin >> ar[i];
	}
	for(int i=0;i<n;i++){
		int m=0;
		for (int j=0;j<i;j++){
			if (ar[i]>ar[j]&&dp[j]>m) m  = dp[j];
		}
		dp[i] = m+1;
		if(max < dp[i]){
			max = dp[i];
		}
	}
	cout << max;
}
//-----------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
	int n,max;
	cin >> n;
	int ar[n];
	int dp[n];
	for (int i=0;i<n;i++){
		cin >> ar[i];
	}
	dp[0] = ar[0];
	max = ar[0];
	for(int i=1;i<n;i++){
		int m=0;
		for (int j=0;j<i;j++){
			if (ar[i]>ar[j]&&dp[j]>m) m  = dp[j];
		}
		dp[i] = m+ar[i];
		if(max < dp[i]){
			max = dp[i];
		}
	}
	cout << max;
}
//-----------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	pair<int,int> ar[n];
	int dp[n];
	for (int i=0;i<n;i++){
		
		cin >> ar[i].first >> ar[i].second;
	}
	sort(ar,ar+n);
	dp[0] = 1;
	int max = 1;
	for (int i=1;i<n;i++){
		dp[i] = 1;
		int m =0;
		for (int j = 0;j < i;j++){
			if (ar[i].second > ar[j].second && dp[j] > m){
				m = dp[j];
			}
		}
		dp[i]  =m+1;
		if (max < dp[i]){
			max = dp[i];
		}
	}
	cout << n-max;
}
