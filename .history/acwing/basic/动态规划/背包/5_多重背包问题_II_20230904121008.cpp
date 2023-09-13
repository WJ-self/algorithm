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
        while (s--){
            printf("v[%d] = %d, w[%d] = %d", cnt, a, cnt, b);
            v[cnt] = a, w[cnt++] = b;
        }
    }
    cnt --;
    for (int i=1; i<=cnt; i++){
        for (int j=V; j>= v[i]; j--){
            dp[j] = max(dp[j], dp[j-v[i]] + w[i]);
        }
    }
    cout << dp[cnt];
    return 0;
}