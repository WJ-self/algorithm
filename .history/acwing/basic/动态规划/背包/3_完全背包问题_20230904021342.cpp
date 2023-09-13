#include<bits/stdc++.h>
using namespace std;

const int M=1010;
int N,V,v[M], w[M];

int main() {
    cin >> N >> V;
    for(int i=1; i<=N; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=V; j++) {
            for (int k=1; k*v[i] <=j; k++) {
                dp[i][j] = max(dp[i-1])
            }
        }
    }
}