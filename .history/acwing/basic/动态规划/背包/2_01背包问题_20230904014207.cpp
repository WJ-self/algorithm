#include<bits/stdc++.h>
using namespace std;

const int M = 1010;
int N,V;
int v[M], w[M];
int dp[M][M]; // dp[i][j]: 背包容量为j时前i个物品的最大价值


int main() {
    cin>>N>>V;
    for (int i=0; i<N; i++) {
        cin >> v[i] >> w[i];
    }

    for(int i=1; i<=N; i++) {
        for (int j=1; j<=V; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[]])
        }
    }

}