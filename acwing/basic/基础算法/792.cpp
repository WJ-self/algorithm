#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int A[N],B[N],C[N];

//整体思路是比较ab大小，然后大的->A，小的->B，算A-B
//NOTICE: 

bool cmp(string s1, string s2){
	if(s1.size() != s2.size()) return s1.size() > s2.size();
	for(int i=0; i<s1.size(); i++) {
		if(s1[i] != s2[i])
			return s1[i] > s2[i];
	}
	return true;
}

void sub(int cnt){
	int t=0;//借位
	for(int i=0; i<cnt; i++){
		int isub = A[i] - B[i] - t;
		C[i] = (isub+10) % 10;
		t = isub < 0? 1:0 ; //借位为1，而不是-1 
	} 
}

int main(){
	string a,b;
	cin >> a >> b;
	
	if(!cmp(a, b)){ // a<b
		swap(a,b);
		cout<<"-";
	}
	int cnt1=0;
	for(int i=a.size()-1; i>=0; i--) {
		A[cnt1++] = a[i] - '0';
	}
	
	int cnt2=0;
	for(int i=b.size()-1; i>=0; i--) {
		B[cnt2++] = b[i] - '0';
	}	
	
	sub(max(cnt1,cnt2));
	
	int end = a.size()-1;
	while (end>0 && C[end] == 0) end--; //去除前导零:11-12=-01, 
	// >0:1-1=0这种情况，给人家留一个 
	for(int i=end; i>=0; i--){
		cout << C[i];
	}
}
