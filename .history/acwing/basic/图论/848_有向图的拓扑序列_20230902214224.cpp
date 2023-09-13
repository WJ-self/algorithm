#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int h[N], e[N], ne[N], idx;

void add(int a,int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int pre[N];
int n,m;
queue<int> qu;
vector<int> path; 

int bfs(int u) {
    qu.push(u);
    while(!qu.empty()) {
        int t = qu.front();
        path.push_back(t);
        pre[t]--;
        qu.pop();
        for (int i=h[t]; i!=-1; i=ne[i]){
            int j=e[i];
            pre[j]--;
            if(pre[j] == 0) qu.push(j);
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
        pre[y]++;
    }
    for (int i=1; i<=n; i++) {
        if(pre[i] == 0) {
            bfs(i);
        }
    }
    if(path.size()<n) {
        printf("-1")
    }
    for (int i=0; i<n; i++){
        printf("%d ",path[i]);
    }
}