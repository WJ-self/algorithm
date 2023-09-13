#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N = 510;
int w[N][N]; //权重
int d[N]; //从节点1->j的距离

bool st[N];//是否已经确定最小

int dijkstra() {
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    st[1] = true;
    for (int i=0; i<n; i++){ // 执行n个节点次
        int t = -1;
        // 找到未访问过的最小节点
        for(int j=1; j<=n; j++) {
            if(!st[j] && (t==-1 || d[t]>d[j]))
                t = j;
        }
        st[t] = true;
        // 根据找到的最小点更新
        for (int j=1; j<=n; j++) {
            d[j] = min(d[j], d[t]+w[t][j]);
        }
    }
    if(d[n] == 0x3f3f3f3f) return -1;
    return d[n];
}

int main() {
    cin >> n >> m;
    memset(w, 0x3f, sizeof w);
    for (int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        w[a][b] = min(c, w[a][b]); //排除重边

    }
    cout << dijkstra() << endl;
    return 0;
}
