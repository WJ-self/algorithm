#include<bits/stdc++.h>
using namespace std;

const int M = 2e6+10;
const int MAXV = 2020;
int N,V,a,b,v[M],w[M],s;
int dp[MAXV]; // 背包容量为i时的最大价值

int main() {
    cin >> N >> V;
    int cnt = 1;
    for (int i=1; i<=N; i++) {
        cin >> a >> b >> s;
        while(s){
            if(s&1) v[cnt] = a, w[cnt++] = b;
            a *= 2, b *= 2;
            s >>= 1;
        }
    }
    // cnt --;
    // printf("cnt = %d\n", cnt);
    for (int i=1; i<=cnt; i++){
        for (int j=V; j>= v[i]; j--){
            dp[j] = max(dp[j], dp[j-v[i]] + w[i]);
            // printf("i=%d, dp[%d] = %d\n",i, j, dp[j]);
        }
    }
    cout << dp[V];
    return 0;
}