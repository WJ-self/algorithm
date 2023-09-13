#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N], t[N];
int n, ans;

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t[i];
    }
    for (int i=1; i<=n; i++) {
        dp[i] = 1;
        for (int j=1; j<i; j++){
            if(t[i] > t[j]) dp[i] = max(dp[i], dp[j]+1);
        }

        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}