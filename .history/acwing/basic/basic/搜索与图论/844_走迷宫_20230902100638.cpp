#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int dx[4]{-1,1,-1,1}, dy[4]{-1,1,1,-1};
int t[N][N], st[N][N];
int n,m;
typedef pair<int,int> PII;
queue<PII> qu;

void bfs() {
    qu.push({1,1});
    while(!qu.empty()) {
        PII tp = qu.front();
        int x =  
    }
}



int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> t[i][j];
        }
    }
    bfs();
    printf("%d",st[n][m]);
}
