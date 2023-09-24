#include<bits/stdc++.h>
using namespace std;
const int N =10;
bool st[N];
int path[N];
int n;

void dfs(int u) {
    if (u == n) {
        for (int i=0; i<n; i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        return ;
    }

    for (int i=1; i<=n; i++) {
        if(st[i] == false) {
            st[i] = true;
            path[u] = i;
            dfs(u+1)
        }
    }
}

int main(){

}