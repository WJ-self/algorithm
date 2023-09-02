#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,m;
int h[N], ne[N], e[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
int res;
int st[N];
queue<int> qu;

int bfs(int u) {
    qu.push(u);
    while(!qu.empty()) {
        int t = qu.front();
        qu.pop();
        if(t == n) return 
    }
}

int main(){
    cin >> n >> m;
    int a,b;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        add(a, b);
    }
    cout << bfs(1) << endl;
}