#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N][N];
int n,m;
int a[N], b[N];

int main() {
    cin >> n >> m;
    string a,b;
    cin >> a >> b;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            dp[i][j] = (a[i-1] == b[j-1])? dp[i-1][j-1]+1:max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[n][m];
    return 0;
}