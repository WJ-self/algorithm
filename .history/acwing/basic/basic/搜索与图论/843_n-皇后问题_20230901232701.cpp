#include<bits/stdc++.h>
using namespace std;
int n;
const int N = 20;
char st[N][N];
int path[N];

void dfs(int u) { //第u行
    if (u == n) {
        for(int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                printf("%c", st[i][j]);
            }
            cout << endl;
        }
    }
    for (int i=0; i<n; i++) { //每一行

    }

}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            st[i][j] = '.';
        }
    }
    dfs(0);
    return 0;
}