#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string w;
	cin >> w;
	while(w.size()){
		cout << w;
		printf("\n");
		w = w.substr(1,w.size()-1);
	}
	return 0;
}
//---------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>> s;
	string b;
	cin >> b;
	int cnt = 0;
	for ( int i=0;i<=s.size()-b.size();i++)
		if (s.substr(i,b.size()) == b)
			cnt++;
	printf("%d",cnt);
	return 0;
}
//-----------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string hex1;
	string hex2;
	cin >> hex1;
	cin >> hex2;
	int num1=0,num2=0;
	for (int i=0;i<hex1.size();i++){
		if ('0'<= hex1[i]&&hex1[i]<='9')
			num1 += hex1[i] - '0';
		else if ('A'<= hex1[i]&&hex1[i]<='F')
			num1 += hex1[i] - '7';
		if ('0'<= hex2[i]&&hex2[i]<='9')
			num2 += hex2[i] - '0';
		else if ('A'<= hex2[i]&&hex2[i]<='F')
			num2 += hex2[i] - '7';
		if (!(num1==num2)) break;
	}
	if (num1>num2) printf("sir");
	else if (num1<num2) printf("kid");
	return 0;
}
//-----------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,pos=1;
	cin >> n;
	int map[50] = {0,};
	for (int i=0;i<n;i++){
		int m;
		char c;
		scanf("%d %c",&m,&c);
		map[m] = c;
	}
	int d;
	cin >> d;
	pos += d;
	while(map[pos]){
		if ('A'<=map[pos]&&map[pos]<='Z') pos += map[pos] - '@';
		else if ('a'<=map[pos]&&map[pos]<='z') pos -= map[pos] - '`';
		if (pos<1) pos =1;
		if (pos>50) pos=50;
	}
	printf("%d",pos);
}
//--------------------------------------------------------------------

