#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,m;
int h[N], ne[N], e[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
int st[N];
queue<int> qu;

int bfs(int u) {
    memset(st,-1,sizeof(st));
    int res=0;
    int tag=1;
    qu.push(u);
    while(!qu.empty()) {
        int t = qu.front();
        qu.pop();
        // printf("in %d", t);
        if(t == n) return st[n];
        if(st[t] == -1) {
            st[t] = res;
            if(tag == t) res++;
            for(int i=h[t]; i!=-1; i=ne[i]){
                int j = e[i];
                qu.push(j);
                st[j] = res;
                if(tag == t) tag = j;
            }
        } 
    }
}

int main(){
    memset(h,-1,sizeof(h));
    cin >> n >> m;
    int a,b;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        add(a, b);
    }
    cout << bfs(1) << endl;
}