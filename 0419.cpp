#include <stdio.h>

int ans =1234567890;
int S[10], B[10];
int n;
	void sol(int index,int s,int b, int count){
		if (index == n)
		{
			int diff;
			if(s>b) diff = s - b;
			else diff = b -s;
			if (diff <ans &&count != n) ans = diff;
			return;
		}
		sol(index +1,s * S[index],b+B[index],count);
		sol(index +1,s,b,count+1);
	}
int main() {
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&S[i],&B[i]);
	}
	sol(0,1,0,0);
	printf("%d",ans);
	return 0;
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	char str[1001];
	scanf("%[^\n]",str);
	for (int i=0;str[i];i++){
		if ('A'<=str[i] && str[i] <'Z'){
			str[i] = str[i] -'A'+'a';
		}
	}
	printf("%s",str);
	return 0;
}
//-------------------------------------------------------------------------기본 
#include <stdio.h>

int main()
{
	char str[1001];
	int alpha[26] = {0,};
	scanf("%s",str);
	for(int i =0 ; str[i];i++){
		if ('a'<=str[i]&&str[i]<='z')
			str[i] = str[i] - 'a' +'A';
		alpha[str[i]-'A']++;
	}
	for (int i = 0;i<26;i++)
		printf("%d ",alpha[i]);
	return 0;
}
//-------------------------------------------------------------------------string.h 사용 
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	int alpha[26] = {0,};
	scanf("%s",str);
	strlwr(str);
	for(int i =0 ; str[i];i++){
		alpha[str[i]-'a']++;
	}
	for (int i = 0;i<26;i++)
		printf("%d",alhpa[i]);
	return 0;
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	char str[1001];
	int n;
	scanf("%d",&n);
	scanf("%s",str);
	for(int i = 0;str[i];i++){
		str[i] = str[i] + n;
		if(str[i]>'Z')
			str[i] = str[i] -26;
		printf("%c",str[i]);
	}
	return 0;
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	char str[1001];
	int alpha[26];
	for (int i = 0;i<26;i++){
		alpha[i] = -1;
	}
	scanf("%s",str);
	for (int i = 0;str[i];i++){
		if (alpha[str[i]-'a'] == -1)
			alpha[str[i]- 'a'] = i;
	}
	for (int i = 0;i<26;i++){
		printf("%d ",alpha[i]);
	}
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	int len;
	int n;
	int index = 0;
	scanf("%d %d",&len,&n);
	char str[len+1] , st[len+1] = {0,};
	scanf("%s",str);
	for(int i =0 ;str[i];i++){
		if(st[index]) index++;
		st[index] = str[i];
		index += n;
		if (index >= len) index -= len;
	}
	printf("%s",st);
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	int len;
	scanf("%d",&len);
	char ostr[len], rstr[len];
	scanf("%s",ostr);
	scanf("%s",rstr);
	for (int i =0; ostr[i];i++){
		bool check = true;
		for(int j = 0;rstr[j];j++){
			if (ostr[(i+j)%len] != rstr[j]) check = false;
		}
		if (check){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
//-------------------------------------------------------------------------
#include <stdio.h>

int main(){
	char A[1000001],B[1000001];
	int numa = 0, numb = 0;
	int Max,min;
	scanf("%s %s",A,B);
	for (int i = 0;A[i];i++){
		if (A[i] == '6') A[i] = '5';
		numa = numa * 10 + A[i] - '0';
	}
	for (int i = 0;B[i];i++){
		if (B[i] == '6') B[i] = '5';
		numb = numb * 10 + B[i] - '0';
	}
	min = numa + numb;
	numa = 0;
	numb = 0;
	for (int i = 0;A[i];i++){
		if (A[i] == '5') A[i] = '6';
		numa = numa * 10 + A[i] - '0';
	}
	for (int i = 0;B[i];i++){
		if (B[i] == '5') B[i] = '6';
		numb = numb * 10 + B[i] - '0';
	}
	Max = numa + numb;
	printf("%d %d",min,Max);
}
