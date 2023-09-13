#include<bits/stdc++.h>
using namespace std;

const int N = 1.5e5+10;
int n,m;
int h[N],e[N],w[N],ne[N],idx;

void add(int a, int b, int c){
	e[idx]=b, w[idx]=c, ne[idx]=h[a], h[a]=idx++;
}

int main() {
	int x,y,z;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		cin >> x >> y >> z;
		add(x,y,z);
	}
}