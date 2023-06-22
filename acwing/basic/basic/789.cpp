#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int K=1e4+10;
int arr[N];
int beg[K];
int ed[K];
int n,q,k;

int main() {
	for (int i=0; i<K; i++) {
		beg[i] = -1;
		ed[i] = -1;
	}
	cin >> n >> q;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if(beg[arr[i]] == -1)
			beg[arr[i]] = i;
		ed[arr[i]] = i;
	}
	for (int i=0; i<q; i++) {
		cin >> k;
		printf("%d %d\n",beg[k],ed[k]);
	}
}
