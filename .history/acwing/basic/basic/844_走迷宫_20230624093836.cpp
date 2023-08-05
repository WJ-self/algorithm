#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int mp[N][N]; // 地图
int d[N][N]; //每一个点到起点的距离
int n,m;
typedef pair<int, int> PII;
queue<PII> qu; 

int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1}; //上下左右的坐标，通过遍历获得

int bfs(){
    memset(d, -1, sizeof(d)); // 初始化为-1
    PII st {0,0};
    qu.push(st);
    d[0][0] = 0;
    while(qu.size()) {
        PII temp = qu.front();
        qu.pop();
        for(int i=0; i<4; i++){
            int x = temp.first + dx[i], y = temp.second + dy[i];
            if(x>=0 && y>=0 && d[x][y] == -1 && mp[x][y] == 0){
                qu.push({x,y});
                d[x][y] = d[temp.first][temp.second] + 1;
            }
        }
    }
    return d[n-1][m-1];
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> mp[i][j];
        }
    }
    
    printf("%d", bfs());
    return 0;
}