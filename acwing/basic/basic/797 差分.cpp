#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int a[N], b[N];
int n,m;

void insert(int l,int r,int c) {
	b[l] += c;
	b[r+1] -= c;
}

int main(){
	cin >> n >> m;
	for (int i=1; i<=n; i++) scanf("%d",&a[i]);
	// 初始化差分数组b
	for (int i=1; i<=n; i++) insert(i,i,a[i]);
	// 操作
	for (int i=0; i<m; i++) {
		int l,r,c;
		cin >> l >> r >> c;
		insert(l,r,c);
	} 
	// 求前缀和a
	for (int i=1; i<=n; i++) {
		a[i] = a[i-1] + b[i];
		printf("%d ", a[i]);
	}
} 
