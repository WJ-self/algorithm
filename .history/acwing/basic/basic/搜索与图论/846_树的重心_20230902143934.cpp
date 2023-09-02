#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, max_res=1e6;
vector<int> eg[N];


void dfs() {
    
}


int main() {
    cin >> n;
    int x,y;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        eg[x].push_back(y);
        eg[y].push_back(x);
    }
    dfs();
    printf("%d",max_res);
}