#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=2;i*i <=n;i++){
		while (n %i==0){
			cout << i <<endl;
			n/=i;
		}
	}
	if (n > 1) {
		cout << n;
	}
}
//----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int factorial (int n){
	if (n==0) return 1;
	else return n * factorial(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}
//----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int gcd(int a,int b){
	if (b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);
}
//----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int gcd(int a,int b){
	if (b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b;
	cin >> a >> b;
	int g = gcd(a,b);
	cout << g << endl << a*b / g << endl;
}
//----------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,b;
	cin >> n >> b;
	string ans = "";
	while (n>0){
		int r = n %b;
		if (r <10) ans += (char)(r+ '0');
		else ans += (char)(r-10 + 'A');
		n/=b;
	}
	reverse(ans.begin(),ans.end());
	cout << ans;
}
//----------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	int ans = 0;
	string s;
	int b;
	cin >> s >> b;
	for (int i = 0;i<s.size();i++){
		if ('0' <= s[i] && s[i] <= '9') ans = ans * b +(s[i] - '0');
		else ans = ans * b + (s[i] - 'A' + 10);
	}
	cout << ans <<endl;
}
//----------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	if (n%3 == 1) cout << s[0];
	else if (n %3 ==2 ) cout << (s[0] - '0')*2 +(s[1]-'0');
	for (int i = n%3;i<n;i+=3) cout << (s[i] - '0')*4 + (s[i+1] - '0')*2 + (s[i+2] - '0');
}
//----------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int a,b,m;
	cin >> a >> b >> m;
	int str[m];
	int ans = 0;
	for (int i = 0; i<m;i++){
		cin >> str[i];
		ans = (ans * a)+ str[i];
	}
	string s = "";
	while (ans>0){
		int r = ans %b;
		s += (char)(r+ '0');
		ans/=b;
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
}
//----------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string b1,b2;
	cin >> b1 >> b2;
	long long ans1 = 0,ans2 = 0,temp  = 1;
	for (int i = b1.length()-1;i >= 0;i--){
		ans1 += (b1[i] - '0')* temp;
		temp *= 2;
	}
	temp = 1;
	for (int i = b2.length()-1;i >= 0;i--){
		ans2 +=(b2[i] - '0')* temp;
		temp *= 2;
	}
	long long sum  = ans1 * ans2;
	string s = "";
	while (sum>0){
		int r = sum %2;
		s += (char)(r+ '0');
		sum/=2;
	}
	while(s[s.length()] == '0'){
		s.erase(s.length());
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
}
//----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main(){
	int p[100];
	int pn=0;
	bool c[101];
	int n =100;
	for (int i =2; i<=n;i++){
		if (c[i] == false){
			p[pn++] = i;
			for (int j = i*i;j<=n;j+=i){
				c[j] = true;
			}
		}
	}
	cout << pn;
}
