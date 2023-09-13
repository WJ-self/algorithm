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
            if(v[i] > j) dp[i][j] = dp[i-1][j];
            else {
                for (int k=1; k*v[i] <=j; k++) {
                    
                }
            }
        }
    }
}