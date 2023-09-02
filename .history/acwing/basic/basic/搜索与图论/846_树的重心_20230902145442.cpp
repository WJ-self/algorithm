#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, tmp_res, max_res=1e6;
vector<int> eg[N];
int st[N];

int dfs(int u) { //去掉u
    int conn = 0;
    for (int i=0; i < eg[u].size(); i++) {
        int child = eg[u][i];
        if(!st[child]){
            st[child] = 1;
            conn += dfs(child) + 1;
            printf("in %d:conn")
            st[child] = 0;
        } 
    }
    return conn;
}


int main() {
    cin >> n;
    int x,y;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        eg[x].push_back(y);
        eg[y].push_back(x);
    }
    for(int i=1; i<=n; i++) {
        // 依次去掉各个结点
        st[i] = 1;
        tmp_res = dfs(i);
        st[i] = 0;
        if(tmp_res && tmp_res < max_res) max_res = tmp_res;
    }
    printf("%d",max_res);
}