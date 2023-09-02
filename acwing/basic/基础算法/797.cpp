#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N], b[N];//a是b的前缀和，b是a的差分，a[0]=0, b[i]=a[i]-a[i-1]

int main(){
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[i]=a[i]-a[i-1];
	}
	int l,r,c;
	for(int i=0;i<m;i++){
		//a[i,j]+c = (b[l]+c) and (b[r+1]-c)
		cin >> l >> r >> c;
		b[l] += c;
		b[r+1] -= c;
	}
	int res=0;
	for(int i=1; i<=n; i++){
		res+=b[i];
		printf("%d ",res);
	}
}
