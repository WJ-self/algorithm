#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,m;
int h[N], ne[N], e[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
int d[N+];
queue<int> qu;

int bfs() {
    memset(d, -1, sizeof(d));
    qu.push(1);
    d[1] = 0;
    while(!qu.empty()) {
        int t = qu.front();
        qu.pop();
        for (int i=h[t]; i!=-1; i=ne[i]) {
            int j=e[i];
            if(d[j] == -1){
                d[j] = d[t]+1;
                if(j == n) return d[n];
                qu.push(j);
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
    cout << bfs() << endl;
}