#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, ans;
int dp[N], t[N];

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t[i];
    }
    // dp[i]: 前i个数字中最大的数字
    // 二分：在dp[i]中找到 <= w[i]的最大数字

}