#include<bits/stdc++.h>
using namespace std;

const int M = 1e5+10;
const int MAXV = 2020;
int N,V,v[M],w[M];
int dp[1010][2020]; // 背包容量为i时的最大价值

int main() {
    cin >> N >> V;
    int cnt = 1;
    int a,b,s;
    for (int i=1; i<=N; i++) {
        cin >> a >> b >> s;
       
    }
    cnt --;
    // printf("cnt = %d\n", cnt);
    for (int i=1; i<=cnt; i++) {
        for (int j=1; j<=V; j++) {
            if(j < v[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
        }
    }
    cout << dp[cnt][V];
    return 0;
}