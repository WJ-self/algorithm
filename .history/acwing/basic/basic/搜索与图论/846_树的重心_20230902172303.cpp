#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int M = 2*N;

int n;
int h[N], e[M], ne[M], idx;

void add(int a,int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int ans = N;
int st[N];

// 根节点为u的子树连通图最多节点
int dfs(int u) {
    st[u] = 1;
    int sum=1, res=0;
    for (int i=h[u]; i!=-1; i=ne[i]){
        int j=e[i];
        int s;
        if(!st[j]){
            s = dfs(j);
            sum += s;
            res = max(res, s);
        } 
    }
    res = max(res, n-sum);
    ans = min(ans, res);
    return res;
}

int main() {
    memset(h, -1, sizeof(h));
    int x, y;
    cin >> n;
    for (int i=0; i<n-1; i++) {
        cin >> x >> y;
        add(x, y), add(y, x);
    }
    dfs(1);
    cout << ans <<endl;
}