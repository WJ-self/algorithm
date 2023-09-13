#include<bits/stdc++.h>
using namespace std;

const int M=1010;
int N,V,v[M], w[M];
int dp[M];

int main() {
    cin >> N >> V;
    for(int i=1; i<=N; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i=1; i<=N; i++){
        for (int j=v[i]; j <=M; j++) {
            dp[j] = max(dp[j-v[i]] + w[i], dp[j]);
        }
    }
}