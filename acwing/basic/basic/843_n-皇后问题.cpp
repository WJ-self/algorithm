#include<bits/stdc++.h>
using namespace std;

const int N=20;
char s[N][N]; //输出.Q棋盘
int col[N], dg[N], udg[N];// 竖线, 对角线, 反对角线
int n;

void dfs(int u){ //按行遍历，第u行
    if(u == n){
        for(int i=0; i<n; i++) puts(s[i]); // 相当于cout<<s[i]
        puts("");//回车
        return;
    }
    int x=u;
    for(int y=0; y<n; y++){ //对于第0行的y坐标从0->n-1
        if(!col[y] && !dg[y-x+n] && !udg[y+x]){ //可以写Q
            s[x][y] = 'Q';
            col[y] = dg[y-x+n] = udg[y+x] = true;
            dfs(u+1);
            // 恢复现场
            s[x][y] = '.';
            col[y] = dg[y-x+n] = udg[y+x] = false;
        }
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            s[i][j] = '.';
        }
    }
    dfs(0); //按行遍历，第0行
    return 0;
}