//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1001];
//	char target[] = "finearts";
//	scanf("%s",str);
//	strlwr(str);
//	for(int i =0 ; str[i];i++){
//		for (int j = 0;target[j];j++ ){
//			if (str[i] == target[j]){
//				str[i] = '0';
//			}
//		}	
//	}
//	for (int i = 0;str[i];i++){
//		if (str[i] == '0') continue;
//		printf("%c",str[i]);
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str,r;
//	cin >> str;
//	int kind;
//	bool check = 0;
//	scanf("%d",&kind);
//	for (int i = 0;i<kind;i++){
//		cin >> r;
//		if (str == r){
//			check = 1;
//		}
//	}
//	if (check) printf("Yes");
//	else printf("No");
//	return 0;
//}
//----------------------------------------------------------------------------------------
//#include<cstdio>
//#include<cstring>
//
//char str[100001];
//
//int palindrome(int st, int en)
//	{
//		if (st > en) return 0;
//		if (str[st] == str[en])
//		return palindrome(st + 1, en - 1);
//		else return 1;
//	}
//
//int main()
//{
//	int t;
//	int count = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%s", str);
//		count += palindrome(0, strlen(str) - 1);
//	}
//	printf("%d", t - count);
//	return 0;
//}
//----------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//	string a,b;
//	cin >> a;
//	cin >> b;
//	if (a.size()>b.size())
//		cout << a;
//	else if(a.size()>b.size())
//		cout << b;
//	else{
//		if (a>b) cout <<a;
//		else cout << b;
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//	string s;
//	cin >>s;
//	string bomb;
//	cin >> bomb;
//	int bs = bomb.size();
//	int index = 0;
//	while(1)
//	{
//		index = s.find(bomb);
//		if  (index < 0) break;
//		s= s.substr(0,index) + s.substr(index + bs,s.size()+(index + bs));
//	}
//	if (!s.size()) printf("Art!!!!");
//	else cout << s;
//}
//----------------------------------------------------------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//	int n,a,b;
//	string command,str;
//	scanf("%d",&n);
//
//	for (int i=0;i<n;i++){
//		cin >> a;
//		if (a == 0) 
//		{
//			cin >> b;
//			cin >> command;
//			str = str.substr(0,b) + command + str.substr(b,str.size() - b);
//		}
//		else if (a == 1)
//		{
//			scanf("%d",&b);
//			str = str.substr(0,b) + str.substr(b+1,str.size() - (b+1));
//		}
//		else if (a == 2) cout << str;
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main(){
	string best[3] = {"","",""};
	int w;
	cin >> w;
	string twbs[w];
	string temp;
	for (int i = 0;i<w;i++){
		//cin >> twbs[i];
		cin >> temp;
		if (best[0]==temp || best[1]==temp || best[2]==temp) continue;
		if 
		
		best[0] = best[1];
		best[1] = best[2];
		best[2] = temp; 
	}
	for (int i = 0;i<w;i++){
		for (int j = 0;i<3;j++){
			if (twbs[i]== best[j]) {
				for (int k = 0;best[k];k++){
					printf("%s",best[k]);
				}
			}
			else 
		}
	}
}
