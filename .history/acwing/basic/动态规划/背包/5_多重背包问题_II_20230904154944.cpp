#include<bits/stdc++.h>
using namespace std;

const int M = 1e5+10;
const int MAXV = 2020;
int N,V,v[M],w[M];
int dp[MAXV]; // 背包容量为i时的最大价值

int main() {
    cin >> N >> V;
    int cnt = 1;
    int a,b,s;
    for (int i=1; i<=N; i++) {
        cin >> a >> b >> s;
        int k=1;
        while(k <= s){
            v[cnt] = k*a, w[cnt++] = k*b;
            
        }
    }
    cnt --;
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