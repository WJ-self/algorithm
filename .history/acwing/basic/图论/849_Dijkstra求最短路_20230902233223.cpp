#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N = 510, M = 1e5+10;
int w[N][N]; //权重
int d[N]; //从节点1->j的距离

bool st[N];//是否已经确定最小

int dijkstra() {
    memset(d, 0x3f, sizeof(d));
    d[1] = 0;
    for (int i=0; i<n; i++){ // 执行n个节点次
        int t = -1;
        for(int j=1; j<=n; j++) {
            if(!st[j] && (t==-1 || d))
        }
    }
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
