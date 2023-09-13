#include<bits/stdc++.h>
using namespace std;

const int M = 1010;
int dp[M]; // dp[j]: 背包容量为j时的最大价值
int N,V, v[M], w[M];

int main() {
    cin >> N >> V;
    for (int i=1; i<=N; i++) {
        cin >> v[i] >> w[i];
        for (int j=M; j>=v[i]; j--) {
            dp[j] = max(dp[j], dp[j-v[i]] + w[i]);
        }
    }
    cout << dp[N];
}
