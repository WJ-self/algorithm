#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int h[N], e[N], ne[N], idx;

void add(int a,int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int pre[N];
bool st[N];
int n,m;
queue<int> qu;
vector<int> path; 

int bfs(int u) {
    st[u] = true;
    qu.push(u);
    path.push_back(u);
    while(!qu.empty()) {
        int t = qu.front();
        qu.pop();
        for (int i=h[t]; i!=-1; i=ne[i]){
            pre[i]--;
            if(pre[i] == 0) qu.push(i);
        }
    }
}

int main() {
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    int x,y;
    for (int i=0; i<m; i++) {
        cin >> x >> y;
        add(x,y);
    }
    for (int i=1; i<=n; i++) {
        if(pre[i] == 0 && !st[i]) {
            bfs(i);
        }
    }
}