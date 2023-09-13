#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int h[N], e[N], ne[N], idx;

void add(int a,int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int st[N];
int n,m;

int bfs(int u) {

}

int main() {
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        
    }
}