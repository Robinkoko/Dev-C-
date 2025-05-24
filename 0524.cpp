#include <iostream>
#include<utility>
using namespace std;
struct book{
	string s;
	int g, u;
};
int main(){
	int n;
	cin >> n;
	book b[1001];
	for (int i=0;i<n;i++){
		cin >>b[i].s >> b[i].g >> b[i].u;
	}
	string t;
	cin >> t;
	for (int i=0;i<n;i++){
		if (t==b[i].s){
			cout << b[i].g <<" "<< b[i].u;
			break;
		}
	}
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include<utility>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	pair<int, int> star[101];
	for (int i=1;i <=n;i++){
		int x,y;
		cin >> x >>y;
		star[i] = make_pair(x,y);
	}
	int sum =0;
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		int x_dist = (star[a].first - star[b].first)*(star[a].first - star[b].first);
		int y_dist = (star[a].second - star[b].second)*(star[a].second - star[b].second);
		sum += x_dist +y_dist;
	}
	cout << sum;
	return 0;
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int  main(){
	stack <int> s;
	queue <int> q;
	for (int i = 0;i<10;i++){
		
		int a; cin >> a;
		s.push(a);
		q.push(a);
	}
	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	} cout << endl;
	while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int  main(){
	stack <int> s;
	queue <string> q;
	int n;
	cin >> n;
	for (int i =0;i<n;i++){
		int n;
		string str;
		cin >> n >> str;
		s.push(n);
		q.push(str);
	}while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	} cout << endl;
	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n,k;
	cin >> n >>k;
	queue <int> q;
	for (int i=1;i<=n;i++){
		q.push(i);
	}
	while (!q.empty()){
		for (int i=0;i<k-1;i++){
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << " ";
		q.pop();
	}
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin >> n;
	stack <int> s;
	for (int i =0;i<n;i++){
		int size;
		cin >> size;
		while(!s.empty() && s.top() < size){
			s.pop();
		}
		s.push(size);
	}
	cout << s.size();
	return 0;
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <char> s;
	char str[1001];
	cin >> str;
	for (int i =0;str[i];i++){
		if (str[i] == '(' ||str[i] == '{' || str[i] == '['){
			s.push(str[i]);
			continue;
		}
		else if (s.top()=='('&&str[i] == ')'){
			s.pop();
			continue;
		}
		else if (s.top()=='{'&&str[i] == '}'){
			s.pop();
			continue;
		}
		else if (s.top()=='['&&str[i] == ']'){
			s.pop();
			continue;
		}
		else cout << "0";
		return 0;
	}
	if (s.empty()) cout << "1";
	else cout <<"0";
	return 0;
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <queue>
using namespace std;
int main(){
	int a,b;
	cin >> a>>b;
	queue<int> q;
	q.push(a);
	while (!q.empty()){
		int num = q.front();
		q.pop();
		if (num == b){
			printf("1");
			return 0;
		}
		if (num *2 <=b) q.push(num*2);
		if (num *10 +1 <=b) q.push(num *10 +1);
	}
	cout << "-1";
	return 0;
}
//-------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
using namespace std;
int main(){
	char str[101];
	cin >> str;
	stack <int> s;
	for (int i =0 ;str[i];i++){
		if ('0'<=str[i]&&str[i]<='9') s.push(str[i] - '0');
		else {
			int a =s.top();
			s.pop();
			int b = s.top();
			s.pop();
			if (str[i] == '+') s.push (b+a);
			else s.push(b-a);
		}
	}
	cout << s.top();
	return 0;
}
