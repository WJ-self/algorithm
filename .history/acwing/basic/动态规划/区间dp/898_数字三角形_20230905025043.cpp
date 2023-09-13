#include<bits/stdc++.h>
using namespace std;

int n,ans;
const int N = 510;
int t[N][N], dp[N][N];


int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++){
            cin >> t[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=1; j<n; j++){
            dp[i][j] = -0x3f3f3f3f;
        }
    }
    dp[1][1] = 
    for (int i=2; i<=n; i++) {
        for (int j=1; j<=i; j++){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + t[i][j];
            if (i==n) ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;
    return 0;

}