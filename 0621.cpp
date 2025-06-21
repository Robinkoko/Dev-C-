//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
////(()[[]])([])
//int main(){
//	string str;
//	cin >> str;
//	int cnt = 1;
//	int sum = 0;
//	stack<char> s;
//	for (int i=0;i <str.length();i++){
//		if (str[i] == '(') {
//			cnt *= 2;
//			s.push(str[i]);
//		}
//		else if (str[i] == '['){
//			cnt *= 3;
//			s.push(str[i]);
//		}
//		else if(str[i] == ')'){
//			if (s.empty() || s.top() != '('){
//				cout << 0 <<endl;
//				return 0;
//			}
//			s.pop();
//			if (str[i-1] == '(') {
//				sum += cnt;	
//			}
//			cnt /= 2;
//		}
//		else if(str[i] == ']'){
//			if (s.empty() || s.top() != '['){
//				cout << 0 <<endl;
//				return 0;
//			}
//			s.pop();
//			if (str[i-1] == '[') {
//				sum += cnt;	
//			}
//			cnt /= 3;
//		}
//	}
//	cout << sum;
//}
//-------------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//int a[10000000];
//void swap(int &x, int &y){
//	int z=x;
//	x = y;
//	y=z;
//}
//int choosePivot(int low, int high){
//	return low + (high - low)/2;
//}
//int partition(int low ,int high){
//	int pivotIndex = choosePivot (low, high);
//	int pivotValue = a[pivotIndex];
//	swap (a[pivotIndex],a[high]);
//	int storeIndex = low;
//	for (int i =low;i<high;i++){
//		if (a[i]<pivotValue ){
//			swap (a[i],a[storeIndex]);
//			storeIndex +=1;
//		}
//	}
//	swap(a[storeIndex],a[high]);
//	return storeIndex;
//}
//void quicksort(int low, int high){
//	if (low < high){
//		int pivot = partition(low,high);
//		quicksort(low,pivot-1);
//		quicksort(pivot+1,high);
//	}
//}
//int main(){
//	int n;
//	cin >> n;
//	for (int i=0;i<n;i++){
//		cin >> a[i];
//	}
//	quicksort(0,n-1);
//	for (int i=0;i<n;i++){
//		cout << a[i] << ' ';
//	}
//	return 0;
//}
//--------------------------------------------------------------
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	long long a[n];
//	for (int i=0;i<n;i++){
//		cin >> a[i+1];
//	}
//	sort(a,a+n);
//	long long ans = a[0];
//	int ans_cnt = 1;
//	int cnt = 1;
//	for ( int i =1;i<n;i++){
//		if (a[i] == a[i-1]){
//			cnt +=1;
//		}
//		else{
//			cnt =1;
//		}
//		if (ans_cnt < cnt){
//			ans_cnt = cnt;
//			ans = a[i];
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}
//--------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;	

struct student{
	int country;
	int num;
	int score;
};

bool cmp(student left,student right){
	return left.score > right.score;
}

int main(){
	int n;
	cin >> n;
	student s[n];
	for(int i = 0;i<n;i++){
		cin >> s[i].country >> s[i].num >> s[i].score;
	}
	sort(s,s+n,cmp);
	int country[n] = {0,};
	int count = 0;
	for (int i = 0;i<n;i++){
		if (country[s[i].country-1] < 2){
			cout << s[i].country << ' ' << s[i].num << endl;
			count++;
		}
		if ( count >=3) break;
		country[s[i].country-1]++;
	}

}
