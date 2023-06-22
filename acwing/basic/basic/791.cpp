#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int p1[N],p2[N],res[N];

int add(int cnt){
	int t=0;//½øÎ»
	for (int i=0; i<cnt; i++){
		int isum = p1[i] + p2[i] + t;
		res[i] = isum % 10;
		t = isum / 10;
	}	
	if(t) res[cnt++] = 1;
	return cnt;
}

int main(){
	string a, b;
	cin >> a >> b;
	
	int cnt1 = 0;
	for (int i=a.size()-1; i>=0; i--){
		p1[cnt1++] = a[i] - '0';
	}
	
	int cnt2=0;
	for (int i=b.size()-1; i>=0; i--){
		p2[cnt2++] = b[i] - '0';
	}
	int res_cnt = add(max(cnt1, cnt2));
	for (int i=res_cnt-1; i>=0; i--) {
		cout << res[i];
	}
} 
