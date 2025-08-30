#include<iostream>
using namespace std;

int main(){
	int t,a,b;
	cin >> t;
	int n[t];
	for(int i =0;i<t;i++){
		cin >> a>>b;
		n[i] = a+b;
	}
	for(int i =0;i<t;i++){
		cout << n[i];
	}
}
//---------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int a[26] = {0,};
	cin >> str;
	for(int i = 0; i<str.length();i++){
		if ('A'<=str[i]&&str[i]<='Z'){
			a[str[i] - 'A']++;
		}
		if ('a'<=str[i]&&str[i]<='z'){
			a[str[i] - 'a']++;
		}
	}
	int max = 0;
	int temp;
	for(int i = 0 ;i<26;i++){
		if (a[i] > max){
			max = a[i];
			temp = i;
		}
	}
	a[temp]--;
	for(int i = 0 ;i<26;i++){
		if (a[i] == max){
			cout << "?" << endl;
			return 0;
		}
	}
	char op = 'A'+temp;
	cout << op << endl;
	return 0;
}
//---------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int max = -1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if (i==j||j==k||i==k) continue;
				if (m>=a[i]+a[j]+a[k]&&a[i]+a[j]+a[k]>max) max = a[i]+a[j]+a[k];
			}
		}
	}
	cout << max << endl;
}
//---------------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
	int n,t;
	cin >> t;
	int ans[t];
	int p[101] = {0,};
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	for(int i = 4; i<101;i++){
		p[i] = p[i-2] + p[i-3];
	}
	for(int i=0;i<t;i++){
		cin >> n;
		ans[i] = p[n];
	}
	for(int i=0;i<t;i++){
		cout << ans[i] << endl;
	}
}
