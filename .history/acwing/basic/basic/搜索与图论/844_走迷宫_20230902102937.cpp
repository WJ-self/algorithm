#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int dx[4]{-1,0,1,0}, dy[4]{0,-1,0,1};
int t[N][N], st[N][N];
int n,m;
typedef pair<int,int> PII;
queue<PII> qu;

void printfst(){
    for (int i=1; i<=n;i++) {
        for (int j=1; j<=n; j++) {
            printf("%d ",st[i][j]);
        }
        cout << endl;
    }
    cout << endl;
}

void bfs() {
    qu.push({1,1});
    st[1][1] = 1;
    while(!qu.empty()) {
        PII tp = qu.front();
        qu.pop();
        for (int i=0; i<4; i++) {
            int x = tp.first + dx[i], y = tp.second + dy[i];
            if (x > 0 && x <= n && y > 0 && y <= n && t[x][y]==0 &&!st[x][y]) {
                qu.push({x,y});
                st[x][y] = st[tp.first][tp.second] + 1;
                printfst();
            }
        } 
    }
}



int main() {
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin >> t[i][j];
        }
    }
    bfs();
    printf("%d",st[n][m]-1);
}
