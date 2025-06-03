//-------------------------------------------------------------------------TH1 W12
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int ar[5] = {1,3,2,5,4};
	sort(ar,ar+4);
	for (int i =0;i<5;i++)
		cout << ar[i];
}
//--------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int left, int right){
	return left > right;
}
int main(){
	int ar[5] = {1,3,2,5,4};
	sort(ar,ar+5,cmp);
	for (int i =0;i<5;i++)
		cout << ar[i] << " ";
}
//--------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int ar[n];
	cin >> n;
	for (int i =0;i<n;i++)
		cin >> ar[i];
	sort(ar,ar+n);

	int cnt=0,re = 0;
	for (int i =0;i<n;i++)
	{
		cnt +=ar[i];
		re += cnt;
	}

	cout << re;
}
//--------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int left, int right){
	return left > right;
}
int main(){
	int n;
	long ar[n];
	int max = -4611686018427387905,cnt=0,result;
	cin >> n;
	for (int i =0;i<n;i++){
		cin >> ar[i];
	}
	sort(ar,ar+n,cmp);
	for (int i =1;i<=n;i++){
		if (ar[i] == ar[i-1]){
			cnt++;
			if (cnt >= max){
			max = cnt;
			result = ar[i];
			}
		} 
	}
	cout << result;
}
//--------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int left, int right){
	return left > right;
}

int main(){
	int n,k;
	cin >> n;
	cin >> k;
	int ar[n];
	for (int i =0;i<n;i++) cin >> ar[i];
	sort(ar,ar+n,cmp);
	int sum = 0;
	for (int i =0;i<k;i++)
		sum +=ar[i] - i;
	cout << sum;
}
//--------------------------------------------------------------------------TH2 W1
#include <iostream>
#include <queue>
using namespace std;

int main(){
 	int n;
	cin >> n;
	queue<int> q;
	for (int =1;i <=n;i++){
		q.push(i);
	}
	int t = 0;
	while (q.size() > 1){
		t++;
		if (t%2  == 1){
			q.pop();
		}
		else{
			q.push(q.front());
			q.pop()
		}
	}
	cout << q.front();
}
//--------------------------------------------------------------------------TH2 W1
#include <iostream>
#include <stack>
using namespace std;

int main(){
	int k;
	cin >> k;
	stack<int> s;
	for (int i = 0; i<k;i++){
		int n;
		cin >> n;
		if (n!=0){
			s.push(n);
		}
		else s.pop();
	}
	int size = s.size();
	int sum = 0;
	for (int  = 0; i < size; i++){
		sum += s.top()
		s.pop()
	}
	cout << sum;
}
//--------------------------------------------------------------------------TH2 W1
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	string str;
	cin >> str;
	int cnt =0;
	int sum = 0;
	stack<char> s;
	for (int i=0;i <str.length();i++){
		if (str[i] == '('){
			s.push(str[i]);
			cnt++;
		}
		else {
			s.pop();
			snt--;
			if (str[i -1] == '('){
				
				sum +=cnt;
			}
			else sum +=1
		}
	}
	cout << sum
}
