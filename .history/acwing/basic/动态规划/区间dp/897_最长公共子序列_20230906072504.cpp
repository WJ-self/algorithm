#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N][N];
int n,m;
int a[N], b[N];

int main() {
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (int i=1; i<=m; i++) {
        cin >> b[i];
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            dp[i][j] = (a[i] == b[j])? dp[i-1][j-1]+1
        }
    }
}