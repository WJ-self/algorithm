#include<bits/stdc++.h>
using namespace std;

const int M = 110;
int N,V,S;
int v[M][M], w[M][M], s[M], dp[M][M];

int main() {
    cin >> N >> V;
    for (int i=1; i<=N; i++) {
        cin >> s[i];
        for (int j=1; j<=s[i]; j++){
            cin >> v[i][j] >> w[i][j];
        }
    }

    for (int i=1; i<N; i++) {
        for (int j=1; j<=M; j++) {
            for (int k=1; k<=s[i]; k++) {
                dp[i][j] = dp[i-1][j];
                if (j > v[i][k])
            }
        }
    }
}
