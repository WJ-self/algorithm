#include<bits/stdc++.h>
using namespace std;

const int M=1010;
int N,V,v[M], w[M];
int dp[M][M];

int main() {
    cin >> N >> V;
    for(int i=1; i<=N; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=V; j++) {
            for (int k=0; k*v[i] <= j; k++) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-k*v[i]] + k*w[i]);
            }
        }
    }
    cout << dp[N][V];
    return 0;
}