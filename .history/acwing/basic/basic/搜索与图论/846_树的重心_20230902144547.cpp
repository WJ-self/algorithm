#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, tmp_res, max_res=1e6;
vector<int> eg[N];


void dfs(int u, int& tmp_res) { //去掉u
    for (int i=0; i < eg[u].size(); i++) {
        
    }
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
        dfs(i, tmp_res);
        if(tmp_res && tmp_res < max_res) max_res = tmp_res;
    }
    printf("%d",max_res);
}