#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N], S[1000];//S[n]：a[i,j]中a[k]出现的次数 , not S[10], a[i]是char, 不是int 
int n; 


int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	} 
	for (int i=0, j=0; i<n; i++){
		S[a[i]]++;
		while(S[a[i]] > 1) {
			S[a[j]] -- ;
			j ++ ; 
		}
		res = max(res, i-j+1);
	}
	printf("%d", res);
}
