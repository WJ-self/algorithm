#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N = 510, M = 1e5+10;
int w[N][N]; //权重
int d[N]; //从节点1->j的距离

bool

int dijkstra() {
    memset(d, 0x3f, sizeof(d));
    int j=1;
    d[1] = 0;
    // 找到距离最小的节点
    for(int i=1; i<=n; i++) {
        if(d[i] < d[j]) j=i;
    }
    // 更新




}

int main() {
    cin >> n >> m;
    int a,b,c;
    memset(w, 0x3f, sizeof(w));
    for (int i=0; i<m; i++){
        cin >> a >> b >> c;
        w[a][b] = c;
    }
    cout << dijkstra() << endl;
}
