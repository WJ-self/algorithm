#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int n,m;
int dp[N][N];// 1-i A-> i-j B

int main() {
    string a,b;
    cin >> n >> a >> m >> b;

    for(int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min(dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}