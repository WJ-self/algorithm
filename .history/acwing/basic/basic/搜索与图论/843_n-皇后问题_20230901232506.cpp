#include<bits/stdc++.h>
using namespace std;
int n;
const int N = 20;
bool st[N][N];
int path[N];

void dfs(int u) { 、、
    if (u == n) {
        for(int i=0; i<n; i++) {
            string str = "....";
            str[path[i]] = 'Q';
            printf("%s\n", str);
            return;
        }
    }
    for (int i=0; i<n; i++) { //每一行

    }

}

int main() {
    cin >> n;
    dfs(0);
    return 0;
}