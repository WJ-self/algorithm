#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int n;
int h[N], e[N], ne[N], idx;

void add(int a,int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int ans = N;
int st[N];

// 根节点为u的子树连通图最多节点
int dfs(int u) {
    int sum=1, res=0;
    for (int i=h[u]; i!=-1; i=ne[i]){
        int j=e[i];
        int s;
        if(!st[j]) s=dfs(j);
        sum += s;
        res = max(res, s);
    }
    res = max(res, n-sum);
    
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
        st[i] = 1;
        dfs(i);
        st[i] = 0;
    }

}