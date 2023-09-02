#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int n;
int h[N], e[N], ne[N], idx;

void add(int a,int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int res = N;
bool st[N];

// 根节点为u的子树连通图最多节点
void dfs(int u) {
    int sum=0;
    for (int i=h[u]; i!=-1; i=ne[i]){
        int j=e[i];

    }
}

int main() {
    memset(h, -1, sizeof(h));
    int x, y;
    cin >> n;
    for (int i=0; i<n-1; i++) {
        cin >> x >> y;
        add(x, y), add(y, x);
    }
    for (int i=1; i<=n; i++) {
        st[i] = true;
        dfs(i);
    }

}