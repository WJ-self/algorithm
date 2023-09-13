#include<bits/stdc++.h>
using namespace std;

const int N = 1010,INF=0x3f3f3f3f;
int n,m;
int dp[N][N];// 1-i A-> i-j B

int main() {
    string a,b;
    cin >> n >> a >> m >> b;

    for(int i=0; i<=n; i++) dp[i][0] = i;
    for(int i=0; i<=m; i++) dp[0][i] = i;

    for(int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            dp[i][j] = INF;
            dp[i][j] = min(dp[i-1][j]+1, dp[i][j-1]+1);
            if(a[i-1] == b[j-1])  //相等时可能是插入、删除或不动的最小值
                dp[i][j] = min(dp[i-1][j-1], dp[i][j]);
            else { //不相等时可能是插入、删除、替换中的最小值
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]+1);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}