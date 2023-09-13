#include<bits/stdc++.h>
using namespace std;

const int N = 1.5e5+10;
int n,m;
int h[N],e[N],w[N],ne[N],idx;

void add(int a, int b, int c){
	e[idx]=b, w[idx]=c, ne[idx]=h[a], h[a]=idx++;
}

typedef pair<int,int> PII; //distance,ver
priority_queue<PII, vector<PII>, greater<PII>> heap; //最小堆
bool st[N]; //最短距离是否已经确定
int d[N]; //最短距离

int dijkstra() {
	memset(d, 0x3f, sizeof d);
	d[1] = 0;
	heap.push({0,1}); 

	while(heap.size()) {
		auto tmp = heap.top();
		int distance = tmp.first, ver = tmp.second;
		if(st[ver]) continue;
		st[ver] = true;

		for(int i=h[ver]; i!=-1; i=ne[i]){
			int j=e[i];
			d[j] = min(d[j], d[ver]+w[i]);
		}
	}

}

int main() {
	memset(h,-1,sizeof h);
	int x,y,z;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		cin >> x >> y >> z;
		add(x,y,z);
	}
	cout << dijkstra() << endl;
	return 0;
}