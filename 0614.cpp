#include <iostream>
using namespace std;

int main()
{
	int a[11];
	int b[11];
	for (int i = 0;i<10;i++){
		cin >> a[i];
	}
	for (int i = 0;i<10;i++){
		cin >> b[i];
	}
	int aw=0,bw=0,D=0;
	for (int i = 0;i<10;i++){
		if (a[i] > b[i]) aw++;
		else if (a[i] < b[i]) bw++;
		else D++;
	}
	if (aw > bw) cout << "A" << endl;
	else if (aw < bw) cout << "B" << endl;
	else cout << "D" << endl;
}
//-----------------------------------------------------------------------------
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
			cnt--;
			if (str[i -1] == '('){
				
				sum +=cnt;
			}
			else sum +=1;
		}
	}
	cout << sum;
}
//-----------------------------------------------------------------------------
#include <iostream>
#include <stack>
#include <utility>
using namespace std;
stack<pair<int, int> > s;
int main(){
	int n,x;
	cin >> n;
	int ans[n];
	s.push({99999999,0});
	for (int i = 0;i<n;i++){
		cin >> x;
		while (s.top().first < x){
			s.pop();
		}
		ans[i] = s.top().second;
		s.push({x, i+1});
	}
	for (int i = 0;i<n;i++){
		cout << ans[i] << " ";
	} 
}
//-----------------------------------------------------------------------------
#include <iostream>
#include <stack>
#include <string>
using namespace std;
(()[[]])([])
int main(){
	string str;
	cin >> str;
	int cnt = 1;
	int sum = 0;
	stack<char> s;
	for (int i=0;i <str.length();i++){
		if (str[i] == '(') s.push(str[i]);
		else if (str[i] == '[') s.push(str[i]);
		if (s.top() == '('&&str[i] == ')'){
			cnt *= 2;
			s.pop();
			cout << cnt<<endl;
		}
		else if (s.top() == '[' && str[i] == ']'){
			cnt *= 3;
			s.pop();
			cout << cnt<<endl;
		}
		if (s.empty()||!(s.top() == '[' && str[i+1] == ']')||!(s.top() == '('&&str[i+1] == ')')){
			sum += cnt;
			cnt = 1;
			cout <<"s:"<< sum <<endl;
		}
	}
	cout << sum;
}

